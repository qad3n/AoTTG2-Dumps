// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.IMask
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.ComponentModel;
using Il2CppDummyDll;

namespace UnityEngine.UI;

[Token(Token = "0x2000022")]
[EditorBrowsable(EditorBrowsableState.Never)]
[Obsolete("Not supported anymore.", true)]
public interface IMask
{
	[Token(Token = "0x1700004B")]
	RectTransform rectTransform
	{
		[Token(Token = "0x600013D")]
		get;
	}

	[Token(Token = "0x600013C")]
	bool Enabled();
}
