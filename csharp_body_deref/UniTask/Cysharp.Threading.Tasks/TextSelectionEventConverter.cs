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
	[Address(RVA = "0x46DD5F0", Offset = "0x46DD5F0", VA = "0x46DD5F0")]
	public TextSelectionEventConverter(UnityEvent<string, int, int> unityEvent)
	{
	}

	[Token(Token = "0x60008E4")]
	[Address(RVA = "0x46DD6C0", Offset = "0x46DD6C0", VA = "0x46DD6C0")]
	private void InvokeCore(string item1, int item2, int item3)
	{
	}

	[Token(Token = "0x60008E5")]
	[Address(RVA = "0x46DD750", Offset = "0x46DD750", VA = "0x46DD750", Slot = "8")]
	public void Dispose()
	{
	}
}
