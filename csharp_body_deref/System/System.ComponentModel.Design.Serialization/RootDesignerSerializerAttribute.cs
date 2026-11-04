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

[Token(Token = "0x2000240")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Interface, AllowMultiple = true, Inherited = true)]
[Obsolete("This attribute has been deprecated. Use DesignerSerializerAttribute instead.  For example, to specify a root designer for CodeDom, use DesignerSerializerAttribute(...,typeof(TypeCodeDomSerializer)).  https://go.microsoft.com/fwlink/?linkid=14202")]
public sealed class RootDesignerSerializerAttribute : Attribute
{
	[Token(Token = "0x400081A")]
	[FieldOffset(Offset = "0x10")]
	private string _typeId;

	[Token(Token = "0x400081B")]
	[FieldOffset(Offset = "0x18")]
	[CompilerGenerated]
	private readonly bool _003CReloadable_003Ek__BackingField;

	[Token(Token = "0x400081C")]
	[FieldOffset(Offset = "0x20")]
	[CompilerGenerated]
	private readonly string _003CSerializerTypeName_003Ek__BackingField;

	[Token(Token = "0x17000310")]
	public string SerializerBaseTypeName
	{
		[Token(Token = "0x6000F8F")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000311")]
	public override object TypeId
	{
		[Token(Token = "0x6000F90")]
		[Address(RVA = "0x28DB130", Offset = "0x28D9730", VA = "0x1828DB130", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F8E")]
	[Address(RVA = "0x28DB0E0", Offset = "0x28D96E0", VA = "0x1828DB0E0")]
	public RootDesignerSerializerAttribute(string serializerTypeName, string baseSerializerTypeName, bool reloadable)
	{
	}
}
