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
		[Address(RVA = "0x48E2570", Offset = "0x48E2570", VA = "0x48E2570")]
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
		[Address(RVA = "0x48E2580", Offset = "0x48E2580", VA = "0x48E2580", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001546")]
	[Address(RVA = "0x48E2520", Offset = "0x48E2520", VA = "0x48E2520")]
	public RootDesignerSerializerAttribute(string serializerTypeName, string baseSerializerTypeName, bool reloadable)
	{
	}
}
