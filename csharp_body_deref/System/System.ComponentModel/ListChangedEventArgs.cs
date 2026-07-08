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
		[Address(RVA = "0x4572630", Offset = "0x4572630", VA = "0x4572630")]
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
		[Address(RVA = "0x4572640", Offset = "0x4572640", VA = "0x4572640")]
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
		[Address(RVA = "0x4572650", Offset = "0x4572650", VA = "0x4572650")]
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
		[Address(RVA = "0x4572660", Offset = "0x4572660", VA = "0x4572660")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001102")]
	[Address(RVA = "0x4572470", Offset = "0x4572470", VA = "0x4572470")]
	public ListChangedEventArgs(ListChangedType listChangedType, int newIndex)
	{
	}

	[Token(Token = "0x6001103")]
	[Address(RVA = "0x4572540", Offset = "0x4572540", VA = "0x4572540")]
	public ListChangedEventArgs(ListChangedType listChangedType, int newIndex, PropertyDescriptor propDesc)
	{
	}

	[Token(Token = "0x6001104")]
	[Address(RVA = "0x45725C0", Offset = "0x45725C0", VA = "0x45725C0")]
	public ListChangedEventArgs(ListChangedType listChangedType, PropertyDescriptor propDesc)
	{
	}

	[Token(Token = "0x6001105")]
	[Address(RVA = "0x45724D0", Offset = "0x45724D0", VA = "0x45724D0")]
	public ListChangedEventArgs(ListChangedType listChangedType, int newIndex, int oldIndex)
	{
	}
}
