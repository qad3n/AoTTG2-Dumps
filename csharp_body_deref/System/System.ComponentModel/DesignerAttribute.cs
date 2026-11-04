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

[Token(Token = "0x2000205")]
[Conditional("FALSE")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Interface, AllowMultiple = true, Inherited = true)]
public sealed class DesignerAttribute : Attribute
{
	[Token(Token = "0x4000785")]
	[FieldOffset(Offset = "0x10")]
	private readonly string designerTypeName;

	[Token(Token = "0x4000786")]
	[FieldOffset(Offset = "0x18")]
	private readonly string designerBaseTypeName;

	[Token(Token = "0x4000787")]
	[FieldOffset(Offset = "0x20")]
	private string typeId;

	[Token(Token = "0x170002C8")]
	public string DesignerBaseTypeName
	{
		[Token(Token = "0x6000D86")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002C9")]
	public string DesignerTypeName
	{
		[Token(Token = "0x6000D87")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002CA")]
	public override object TypeId
	{
		[Token(Token = "0x6000D88")]
		[Address(RVA = "0x28B2500", Offset = "0x28B0B00", VA = "0x1828B2500", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D81")]
	[Address(RVA = "0x28B2220", Offset = "0x28B0820", VA = "0x1828B2220")]
	public DesignerAttribute(string designerTypeName)
	{
	}

	[Token(Token = "0x6000D82")]
	[Address(RVA = "0x28B2300", Offset = "0x28B0900", VA = "0x1828B2300")]
	public DesignerAttribute(Type designerType)
	{
	}

	[Token(Token = "0x6000D83")]
	[Address(RVA = "0x28B2450", Offset = "0x28B0A50", VA = "0x1828B2450")]
	public DesignerAttribute(string designerTypeName, string designerBaseTypeName)
	{
	}

	[Token(Token = "0x6000D84")]
	[Address(RVA = "0x28B2160", Offset = "0x28B0760", VA = "0x1828B2160")]
	public DesignerAttribute(string designerTypeName, Type designerBaseType)
	{
	}

	[Token(Token = "0x6000D85")]
	[Address(RVA = "0x28B23C0", Offset = "0x28B09C0", VA = "0x1828B23C0")]
	public DesignerAttribute(Type designerType, Type designerBaseType)
	{
	}

	[Token(Token = "0x6000D89")]
	[Address(RVA = "0x28B2050", Offset = "0x28B0650", VA = "0x1828B2050", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D8A")]
	[Address(RVA = "0x28B2100", Offset = "0x28B0700", VA = "0x1828B2100", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
