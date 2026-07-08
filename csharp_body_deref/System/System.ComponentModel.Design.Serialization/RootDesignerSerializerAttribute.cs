using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel.Design.Serialization;

[Token(Token = "0x2000335")]
[Obsolete("This attribute has been deprecated. Use DesignerSerializerAttribute instead.  For example, to specify a root designer for CodeDom, use DesignerSerializerAttribute(...,typeof(TypeCodeDomSerializer)).  https://go.microsoft.com/fwlink/?linkid=14202")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Interface, AllowMultiple = true, Inherited = true)]
public sealed class RootDesignerSerializerAttribute : Attribute
{
	[Token(Token = "0x4000EE3")]
	[FieldOffset(Offset = "0x10")]
	private string _typeId;

	[Token(Token = "0x4000EE4")]
	[FieldOffset(Offset = "0x18")]
	[CompilerGenerated]
	private readonly bool _003CReloadable_003Ek__BackingField;

	[Token(Token = "0x4000EE5")]
	[FieldOffset(Offset = "0x20")]
	[CompilerGenerated]
	private readonly string _003CSerializerTypeName_003Ek__BackingField;

	[Token(Token = "0x170004A1")]
	public string SerializerBaseTypeName
	{
		[Token(Token = "0x6001547")]
		[Address(RVA = "0x45BD470", Offset = "0x45BD470", VA = "0x45BD470")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004A2")]
	public override object TypeId
	{
		[Token(Token = "0x6001548")]
		[Address(RVA = "0x45BD480", Offset = "0x45BD480", VA = "0x45BD480", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001546")]
	[Address(RVA = "0x45BD420", Offset = "0x45BD420", VA = "0x45BD420")]
	public RootDesignerSerializerAttribute(string serializerTypeName, string baseSerializerTypeName, bool reloadable)
	{
	}
}
