// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.IUIElementsUtility
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20003FF")]
internal interface IUIElementsUtility
{
	[Token(Token = "0x60019FD")]
	bool TakeCapture();

	[Token(Token = "0x60019FE")]
	bool ReleaseCapture();

	[Token(Token = "0x60019FF")]
	bool ProcessEvent(int instanceID, IntPtr nativeEventPtr, ref bool eventHandled);

	[Token(Token = "0x6001A00")]
	bool CleanupRoots();

	[Token(Token = "0x6001A01")]
	bool EndContainerGUIFromException(Exception exception);

	[Token(Token = "0x6001A02")]
	bool MakeCurrentIMGUIContainerDirty();
}
