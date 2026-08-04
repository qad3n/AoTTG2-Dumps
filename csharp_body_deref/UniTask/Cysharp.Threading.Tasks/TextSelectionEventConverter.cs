// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.TextSelectionEventConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Events;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000176")]
internal class TextSelectionEventConverter : UnityEvent<(string, int, int)>, IDisposable
{
	[Token(Token = "0x40005B7")]
	[FieldOffset(Offset = "0x30")]
	private readonly UnityEvent<string, int, int> innerEvent;

	[Token(Token = "0x40005B8")]
	[FieldOffset(Offset = "0x38")]
	private readonly UnityAction<string, int, int> invokeDelegate;

	[Token(Token = "0x60008E3")]
	[Address(RVA = "0x4A026F0", Offset = "0x4A026F0", VA = "0x4A026F0")]
	public TextSelectionEventConverter(UnityEvent<string, int, int> unityEvent)
	{
	}

	[Token(Token = "0x60008E4")]
	[Address(RVA = "0x4A027C0", Offset = "0x4A027C0", VA = "0x4A027C0")]
	private void InvokeCore(string item1, int item2, int item3)
	{
	}

	[Token(Token = "0x60008E5")]
	[Address(RVA = "0x4A02850", Offset = "0x4A02850", VA = "0x4A02850", Slot = "8")]
	public void Dispose()
	{
	}
}
