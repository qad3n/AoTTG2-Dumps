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
		[Address(RVA = "0x48B1BE0", Offset = "0x48B1BE0", VA = "0x48B1BE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700045A")]
	public string DesignerTypeName
	{
		[Token(Token = "0x600133F")]
		[Address(RVA = "0x48B1BF0", Offset = "0x48B1BF0", VA = "0x48B1BF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700045B")]
	public override object TypeId
	{
		[Token(Token = "0x6001340")]
		[Address(RVA = "0x48B1C00", Offset = "0x48B1C00", VA = "0x48B1C00", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001339")]
	[Address(RVA = "0x48B1850", Offset = "0x48B1850", VA = "0x48B1850")]
	public DesignerAttribute(string designerTypeName)
	{
	}

	[Token(Token = "0x600133A")]
	[Address(RVA = "0x48B1940", Offset = "0x48B1940", VA = "0x48B1940")]
	public DesignerAttribute(Type designerType)
	{
	}

	[Token(Token = "0x600133B")]
	[Address(RVA = "0x48B1A10", Offset = "0x48B1A10", VA = "0x48B1A10")]
	public DesignerAttribute(string designerTypeName, string designerBaseTypeName)
	{
	}

	[Token(Token = "0x600133C")]
	[Address(RVA = "0x48B1AB0", Offset = "0x48B1AB0", VA = "0x48B1AB0")]
	public DesignerAttribute(string designerTypeName, Type designerBaseType)
	{
	}

	[Token(Token = "0x600133D")]
	[Address(RVA = "0x48B1B60", Offset = "0x48B1B60", VA = "0x48B1B60")]
	public DesignerAttribute(Type designerType, Type designerBaseType)
	{
	}

	[Token(Token = "0x6001341")]
	[Address(RVA = "0x48B1CA0", Offset = "0x48B1CA0", VA = "0x48B1CA0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001342")]
	[Address(RVA = "0x48B1D30", Offset = "0x48B1D30", VA = "0x48B1D30", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
