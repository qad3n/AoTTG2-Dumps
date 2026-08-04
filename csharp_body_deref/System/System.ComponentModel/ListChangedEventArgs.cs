// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ListChangedEventArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002B5")]
public class ListChangedEventArgs : EventArgs
{
	[Token(Token = "0x170003CB")]
	public ListChangedType ListChangedType
	{
		[Token(Token = "0x6001106")]
		[Address(RVA = "0x4897730", Offset = "0x4897730", VA = "0x4897730")]
		[CompilerGenerated]
		get
		{
			return default(ListChangedType);
		}
	}

	[Token(Token = "0x170003CC")]
	public int NewIndex
	{
		[Token(Token = "0x6001107")]
		[Address(RVA = "0x4897740", Offset = "0x4897740", VA = "0x4897740")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003CD")]
	public int OldIndex
	{
		[Token(Token = "0x6001108")]
		[Address(RVA = "0x4897750", Offset = "0x4897750", VA = "0x4897750")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003CE")]
	public PropertyDescriptor PropertyDescriptor
	{
		[Token(Token = "0x6001109")]
		[Address(RVA = "0x4897760", Offset = "0x4897760", VA = "0x4897760")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001102")]
	[Address(RVA = "0x4897570", Offset = "0x4897570", VA = "0x4897570")]
	public ListChangedEventArgs(ListChangedType listChangedType, int newIndex)
	{
	}

	[Token(Token = "0x6001103")]
	[Address(RVA = "0x4897640", Offset = "0x4897640", VA = "0x4897640")]
	public ListChangedEventArgs(ListChangedType listChangedType, int newIndex, PropertyDescriptor propDesc)
	{
	}

	[Token(Token = "0x6001104")]
	[Address(RVA = "0x48976C0", Offset = "0x48976C0", VA = "0x48976C0")]
	public ListChangedEventArgs(ListChangedType listChangedType, PropertyDescriptor propDesc)
	{
	}

	[Token(Token = "0x6001105")]
	[Address(RVA = "0x48975D0", Offset = "0x48975D0", VA = "0x48975D0")]
	public ListChangedEventArgs(ListChangedType listChangedType, int newIndex, int oldIndex)
	{
	}
}
