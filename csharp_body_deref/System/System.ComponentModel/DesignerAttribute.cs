using System.Diagnostics;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002FA")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Interface, AllowMultiple = true, Inherited = true)]
[Conditional("FALSE")]
public sealed class DesignerAttribute : Attribute
{
	[Token(Token = "0x4000E4E")]
	[FieldOffset(Offset = "0x10")]
	private readonly string designerTypeName;

	[Token(Token = "0x4000E4F")]
	[FieldOffset(Offset = "0x18")]
	private readonly string designerBaseTypeName;

	[Token(Token = "0x4000E50")]
	[FieldOffset(Offset = "0x20")]
	private string typeId;

	[Token(Token = "0x17000459")]
	public string DesignerBaseTypeName
	{
		[Token(Token = "0x600133E")]
		[Address(RVA = "0x458CAE0", Offset = "0x458CAE0", VA = "0x458CAE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700045A")]
	public string DesignerTypeName
	{
		[Token(Token = "0x600133F")]
		[Address(RVA = "0x458CAF0", Offset = "0x458CAF0", VA = "0x458CAF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700045B")]
	public override object TypeId
	{
		[Token(Token = "0x6001340")]
		[Address(RVA = "0x458CB00", Offset = "0x458CB00", VA = "0x458CB00", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001339")]
	[Address(RVA = "0x458C750", Offset = "0x458C750", VA = "0x458C750")]
	public DesignerAttribute(string designerTypeName)
	{
	}

	[Token(Token = "0x600133A")]
	[Address(RVA = "0x458C840", Offset = "0x458C840", VA = "0x458C840")]
	public DesignerAttribute(Type designerType)
	{
	}

	[Token(Token = "0x600133B")]
	[Address(RVA = "0x458C910", Offset = "0x458C910", VA = "0x458C910")]
	public DesignerAttribute(string designerTypeName, string designerBaseTypeName)
	{
	}

	[Token(Token = "0x600133C")]
	[Address(RVA = "0x458C9B0", Offset = "0x458C9B0", VA = "0x458C9B0")]
	public DesignerAttribute(string designerTypeName, Type designerBaseType)
	{
	}

	[Token(Token = "0x600133D")]
	[Address(RVA = "0x458CA60", Offset = "0x458CA60", VA = "0x458CA60")]
	public DesignerAttribute(Type designerType, Type designerBaseType)
	{
	}

	[Token(Token = "0x6001341")]
	[Address(RVA = "0x458CBA0", Offset = "0x458CBA0", VA = "0x458CBA0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001342")]
	[Address(RVA = "0x458CC30", Offset = "0x458CC30", VA = "0x458CC30", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
