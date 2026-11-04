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

[Token(Token = "0x20001C0")]
public class ListChangedEventArgs : EventArgs
{
	[Token(Token = "0x1700023A")]
	public ListChangedType ListChangedType
	{
		[Token(Token = "0x6000B4E")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		[CompilerGenerated]
		get
		{
			return default(ListChangedType);
		}
	}

	[Token(Token = "0x1700023B")]
	public int NewIndex
	{
		[Token(Token = "0x6000B4F")]
		[Address(RVA = "0x8E79A0", Offset = "0x8E5FA0", VA = "0x1808E79A0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700023C")]
	public int OldIndex
	{
		[Token(Token = "0x6000B50")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700023D")]
	public PropertyDescriptor PropertyDescriptor
	{
		[Token(Token = "0x6000B51")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B4A")]
	[Address(RVA = "0x28A1960", Offset = "0x289FF60", VA = "0x1828A1960")]
	public ListChangedEventArgs(ListChangedType listChangedType, int newIndex)
	{
	}

	[Token(Token = "0x6000B4B")]
	[Address(RVA = "0x28A19D0", Offset = "0x289FFD0", VA = "0x1828A19D0")]
	public ListChangedEventArgs(ListChangedType listChangedType, int newIndex, PropertyDescriptor propDesc)
	{
	}

	[Token(Token = "0x6000B4C")]
	[Address(RVA = "0x28A1870", Offset = "0x289FE70", VA = "0x1828A1870")]
	public ListChangedEventArgs(ListChangedType listChangedType, PropertyDescriptor propDesc)
	{
	}

	[Token(Token = "0x6000B4D")]
	[Address(RVA = "0x28A18F0", Offset = "0x289FEF0", VA = "0x1828A18F0")]
	public ListChangedEventArgs(ListChangedType listChangedType, int newIndex, int oldIndex)
	{
	}
}
