// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.DesignerAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001C6")]
[Conditional("FALSE")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Interface, AllowMultiple = true, Inherited = true)]
public sealed class DesignerAttribute : Attribute
{
	[Token(Token = "0x40006B6")]
	[FieldOffset(Offset = "0x10")]
	private readonly string designerTypeName;

	[Token(Token = "0x40006B7")]
	[FieldOffset(Offset = "0x18")]
	private readonly string designerBaseTypeName;

	[Token(Token = "0x40006B8")]
	[FieldOffset(Offset = "0x20")]
	private string typeId;

	[Token(Token = "0x17000299")]
	public string DesignerBaseTypeName
	{
		[Token(Token = "0x6000BC6")]
		[Address(RVA = "0x6250E40", Offset = "0x624FE40", VA = "0x6250E40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700029A")]
	public string DesignerTypeName
	{
		[Token(Token = "0x6000BC7")]
		[Address(RVA = "0x6250E50", Offset = "0x624FE50", VA = "0x6250E50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700029B")]
	public override object TypeId
	{
		[Token(Token = "0x6000BC8")]
		[Address(RVA = "0x6250E60", Offset = "0x624FE60", VA = "0x6250E60", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000BC1")]
	[Address(RVA = "0x6250AB0", Offset = "0x624FAB0", VA = "0x6250AB0")]
	public DesignerAttribute(string designerTypeName)
	{
	}

	[Token(Token = "0x6000BC2")]
	[Address(RVA = "0x6250BA0", Offset = "0x624FBA0", VA = "0x6250BA0")]
	public DesignerAttribute(Type designerType)
	{
	}

	[Token(Token = "0x6000BC3")]
	[Address(RVA = "0x6250C70", Offset = "0x624FC70", VA = "0x6250C70")]
	public DesignerAttribute(string designerTypeName, string designerBaseTypeName)
	{
	}

	[Token(Token = "0x6000BC4")]
	[Address(RVA = "0x6250D10", Offset = "0x624FD10", VA = "0x6250D10")]
	public DesignerAttribute(string designerTypeName, Type designerBaseType)
	{
	}

	[Token(Token = "0x6000BC5")]
	[Address(RVA = "0x6250DC0", Offset = "0x624FDC0", VA = "0x6250DC0")]
	public DesignerAttribute(Type designerType, Type designerBaseType)
	{
	}

	[Token(Token = "0x6000BC9")]
	[Address(RVA = "0x6250F00", Offset = "0x624FF00", VA = "0x6250F00", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BCA")]
	[Address(RVA = "0x6250F80", Offset = "0x624FF80", VA = "0x6250F80", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
