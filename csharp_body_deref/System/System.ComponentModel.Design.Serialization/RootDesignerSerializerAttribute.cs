// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel.Design.Serialization;

[Token(Token = "0x2000201")]
[Obsolete("This attribute has been deprecated. Use DesignerSerializerAttribute instead.  For example, to specify a root designer for CodeDom, use DesignerSerializerAttribute(...,typeof(TypeCodeDomSerializer)).  https://go.microsoft.com/fwlink/?linkid=14202")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Interface, AllowMultiple = true, Inherited = true)]
public sealed class RootDesignerSerializerAttribute : Attribute
{
	[Token(Token = "0x400074B")]
	[FieldOffset(Offset = "0x10")]
	private string _typeId;

	[Token(Token = "0x400074C")]
	[FieldOffset(Offset = "0x18")]
	[CompilerGenerated]
	private readonly bool _003CReloadable_003Ek__BackingField;

	[Token(Token = "0x400074D")]
	[FieldOffset(Offset = "0x20")]
	[CompilerGenerated]
	private readonly string _003CSerializerTypeName_003Ek__BackingField;

	[Token(Token = "0x170002E1")]
	public string SerializerBaseTypeName
	{
		[Token(Token = "0x6000DCF")]
		[Address(RVA = "0x627EF10", Offset = "0x627DF10", VA = "0x627EF10")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002E2")]
	public override object TypeId
	{
		[Token(Token = "0x6000DD0")]
		[Address(RVA = "0x627EF20", Offset = "0x627DF20", VA = "0x627EF20", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000DCE")]
	[Address(RVA = "0x627EEC0", Offset = "0x627DEC0", VA = "0x627EEC0")]
	public RootDesignerSerializerAttribute(string serializerTypeName, string baseSerializerTypeName, bool reloadable)
	{
	}
}
