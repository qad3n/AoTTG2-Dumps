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

[Token(Token = "0x2000179")]
internal class TextSelectionEventConverter : UnityEvent<(string, int, int)>, IDisposable
{
	[Token(Token = "0x40005CA")]
	[FieldOffset(Offset = "0x30")]
	private readonly UnityEvent<string, int, int> innerEvent;

	[Token(Token = "0x40005CB")]
	[FieldOffset(Offset = "0x38")]
	private readonly UnityAction<string, int, int> invokeDelegate;

	[Token(Token = "0x6000907")]
	[Address(RVA = "0x2945020", Offset = "0x2943620", VA = "0x182945020")]
	public TextSelectionEventConverter(UnityEvent<string, int, int> unityEvent)
	{
	}

	[Token(Token = "0x6000908")]
	[Address(RVA = "0x2944F90", Offset = "0x2943590", VA = "0x182944F90")]
	private void InvokeCore(string item1, int item2, int item3)
	{
	}

	[Token(Token = "0x6000909")]
	[Address(RVA = "0x2944F40", Offset = "0x2943540", VA = "0x182944F40", Slot = "8")]
	public void Dispose()
	{
	}
}
