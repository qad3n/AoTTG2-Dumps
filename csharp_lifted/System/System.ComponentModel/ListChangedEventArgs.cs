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

[Token(Token = "0x2000181")]
public class ListChangedEventArgs : EventArgs
{
	[Token(Token = "0x1700020B")]
	public ListChangedType ListChangedType
	{
		[Token(Token = "0x600098E")]
		[Address(RVA = "0x6237630", Offset = "0x6236630", VA = "0x6237630")]
		[CompilerGenerated]
		get
		{
			return default(ListChangedType);
		}
	}

	[Token(Token = "0x1700020C")]
	public int NewIndex
	{
		[Token(Token = "0x600098F")]
		[Address(RVA = "0x6237640", Offset = "0x6236640", VA = "0x6237640")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700020D")]
	public int OldIndex
	{
		[Token(Token = "0x6000990")]
		[Address(RVA = "0x6237650", Offset = "0x6236650", VA = "0x6237650")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700020E")]
	public PropertyDescriptor PropertyDescriptor
	{
		[Token(Token = "0x6000991")]
		[Address(RVA = "0x6237660", Offset = "0x6236660", VA = "0x6237660")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600098A")]
	[Address(RVA = "0x6237470", Offset = "0x6236470", VA = "0x6237470")]
	public ListChangedEventArgs(ListChangedType listChangedType, int newIndex)
	{
	}

	[Token(Token = "0x600098B")]
	[Address(RVA = "0x6237540", Offset = "0x6236540", VA = "0x6237540")]
	public ListChangedEventArgs(ListChangedType listChangedType, int newIndex, PropertyDescriptor propDesc)
	{
	}

	[Token(Token = "0x600098C")]
	[Address(RVA = "0x62375C0", Offset = "0x62365C0", VA = "0x62375C0")]
	public ListChangedEventArgs(ListChangedType listChangedType, PropertyDescriptor propDesc)
	{
	}

	[Token(Token = "0x600098D")]
	[Address(RVA = "0x62374D0", Offset = "0x62364D0", VA = "0x62374D0")]
	public ListChangedEventArgs(ListChangedType listChangedType, int newIndex, int oldIndex)
	{
	}
}
