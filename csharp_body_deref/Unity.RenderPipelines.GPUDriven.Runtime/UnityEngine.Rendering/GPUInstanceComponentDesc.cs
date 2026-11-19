// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.GPUInstanceComponentDesc
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000065")]
internal struct GPUInstanceComponentDesc
{
	[Token(Token = "0x40001B2")]
	[FieldOffset(Offset = "0x0")]
	public int propertyID;

	[Token(Token = "0x40001B3")]
	[FieldOffset(Offset = "0x4")]
	public int byteSize;

	[Token(Token = "0x40001B4")]
	[FieldOffset(Offset = "0x8")]
	public bool isOverriden;

	[Token(Token = "0x40001B5")]
	[FieldOffset(Offset = "0x9")]
	public bool isPerInstance;

	[Token(Token = "0x40001B6")]
	[FieldOffset(Offset = "0xC")]
	public InstanceType instanceType;

	[Token(Token = "0x40001B7")]
	[FieldOffset(Offset = "0x10")]
	public InstanceComponentGroup componentGroup;

	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x65D0490", Offset = "0x65CF490", VA = "0x65D0490")]
	public GPUInstanceComponentDesc(int inPropertyID, int inByteSize, bool inIsOverriden, bool inPerInstance, InstanceType inInstanceType, InstanceComponentGroup inComponentType)
	{
	}
}
