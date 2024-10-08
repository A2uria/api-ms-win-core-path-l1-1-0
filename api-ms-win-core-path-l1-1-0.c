#define WIN32_LEAN_AND_MEAN
#define WINPATHCCHAPI
#define PATHCCH_NO_DEPRECATE
#include <windows.h>
#include <pathcch.h>
#include <shlwapi.h>

HRESULT WINAPI PathAllocCanonicalize(PCWSTR pszPathIn, ULONG dwFlags,
                                     PWSTR *ppszPathOut)
{
    return E_NOTIMPL;
}

HRESULT WINAPI PathAllocCombine(PCWSTR pszPathIn, PCWSTR pszMore,
                                ULONG dwFlags, PWSTR *ppszPathOut)
{
    return E_NOTIMPL;
}

HRESULT WINAPI PathCchAddBackslash(PWSTR pszPath, size_t cchPath)
{
    return PathCchAddBackslashEx(pszPath, cchPath, NULL, NULL);
}

HRESULT WINAPI PathCchAddBackslashEx(PWSTR pszPath, size_t cchPath,
                                     PWSTR *ppszEnd, size_t *pcchRemaining)
{
    return PathAddBackslashW(pszPath) ? S_OK : E_FAIL;
}

HRESULT WINAPI PathCchAddExtension(PWSTR pszPath, size_t cchPath,
                                   PCWSTR pszExt)
{
    return PathAddExtensionW(pszPath, pszExt) ? S_OK : E_FAIL;
}

HRESULT WINAPI PathCchAppend(PWSTR pszPath, size_t cchPath, PCWSTR pszMore)
{
    return PathCchAppendEx(pszPath, cchPath, pszMore, 0);
}

HRESULT WINAPI PathCchAppendEx(PWSTR pszPath, size_t cchPath, PCWSTR pszMore,
                               ULONG dwFlags)
{
    return PathAppendW(pszPath, pszMore) ? S_OK : E_FAIL;
}

HRESULT WINAPI PathCchCanonicalize(PWSTR pszPathOut, size_t cchPathOut,
                                   PCWSTR pszPathIn)
{
    return PathCchCanonicalizeEx(pszPathOut, cchPathOut, pszPathIn, 0);
}

HRESULT WINAPI PathCchCanonicalizeEx(PWSTR pszPathOut, size_t cchPathOut,
                                     PCWSTR pszPathIn, ULONG dwFlags)
{
    return PathCanonicalizeW(pszPathOut, pszPathIn) ? S_OK : E_FAIL;
}

HRESULT WINAPI PathCchCombine(PWSTR pszPathOut, size_t cchPathOut,
                              PCWSTR pszPathIn, PCWSTR pszMore)
{
    return PathCchCombineEx(pszPathOut, cchPathOut, pszPathIn, pszMore, 0);
}

HRESULT WINAPI PathCchCombineEx(PWSTR pszPathOut, size_t cchPathOut,
                                PCWSTR pszPathIn, PCWSTR pszMore,
                                ULONG dwFlags)
{
    return PathCombineW(pszPathOut, pszPathIn, pszMore) ? S_OK : E_FAIL;
}

HRESULT WINAPI PathCchFindExtension(PCWSTR pszPath, size_t cchPath,
                                    PCWSTR *ppszExt)
{
    return ppszExt ? (*ppszExt = PathFindExtensionW(pszPath)) ? S_OK : E_FAIL
                   : E_INVALIDARG;
}

BOOL WINAPI PathCchIsRoot(PCWSTR pszPath)
{
    return PathIsRootW(pszPath);
}

HRESULT WINAPI PathCchRemoveBackslash(PWSTR pszPath, size_t cchPath)
{
    return PathCchRemoveBackslashEx(pszPath, cchPath, NULL, NULL);
}

HRESULT WINAPI PathCchRemoveBackslashEx(PWSTR pszPath, size_t cchPath,
                                        PWSTR *ppszEnd, size_t *pcchRemaining)
{
    return PathRemoveBackslashW(pszPath) ? S_OK : E_FAIL;
}

HRESULT WINAPI PathCchRemoveExtension(PWSTR pszPath, size_t cchPath)
{
    PathRemoveExtensionW(pszPath);
    return S_OK;
}

HRESULT WINAPI PathCchRemoveFileSpec(PWSTR pszPath, size_t cchPath)
{
    return PathRemoveFileSpecW(pszPath) ? S_OK : E_FAIL;
}

HRESULT WINAPI PathCchRenameExtension(PWSTR pszPath, size_t cchPath,
                                      PCWSTR pszExt)
{
    return PathRenameExtensionW(pszPath, pszExt) ? S_OK : E_FAIL;
}

HRESULT WINAPI PathCchSkipRoot(PCWSTR pszPath, PCWSTR *ppszRootEnd)
{
    if (pszPath && ppszRootEnd) {
        if (pszPath[0] && pszPath[1] == L':') {
            if (pszPath[2] == L'\\') {
                *ppszRootEnd = &pszPath[3];
            } else {
                *ppszRootEnd = &pszPath[2];
            }
            return S_OK;
        } else {
            return (*ppszRootEnd = PathSkipRootW(pszPath)) ? S_OK : E_FAIL;
        }
    } else {
        return E_INVALIDARG;
    }
}

HRESULT WINAPI PathCchStripPrefix(PWSTR pszPath, size_t cchPath)
{
    return E_NOTIMPL;
}

HRESULT WINAPI PathCchStripToRoot(PWSTR pszPath, size_t cchPath)
{
    return PathStripToRootW(pszPath) ? S_OK : E_FAIL;
}

BOOL WINAPI PathIsUNCEx(PCWSTR pszPath, PCWSTR *ppszServer)
{
    return PathIsUNCW(pszPath);
}

BOOL WINAPI _DllMainCRTStartup(HINSTANCE hinstDLL, DWORD fdwReason,
                               LPVOID lpvReserved)
{
    return TRUE;
}
