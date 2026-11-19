// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.GPUInstanceDataBufferBuilder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000069")]
internal struct GPUInstanceDataBufferBuilder : IDisposable
{
	[Token(Token = "0x40001CE")]
	[FieldOffset(Offset = "0x0")]
	private NativeList<GPUInstanceComponentDesc> m_Components;

	[Token(Token = "0x60001CC")]
	[Address(RVA = "0x65D0F00", Offset = "0x65CFF00", VA = "0x65D0F00")]
	private MetadataValue CreateMetadataValue(int nameID, int gpuAddress, bool isOverridden)
	{
		return default(MetadataValue);
	}

	[Token(Token = "0x60001CD")]
	public void AddComponent<T>(int propertyID, bool isOverriden, bool isPerInstance, InstanceType instanceType, InstanceComponentGroup componentGroup = InstanceComponentGroup.Default) where T : struct
	{
	}

	[Token(Token = "0x60001CE")]
	[Address(RVA = "0x65D0F10", Offset = "0x65CFF10", VA = "0x65D0F10")]
	public void AddComponent(int propertyID, bool isOverriden, int byteSize, bool isPerInstance, InstanceType instanceType, InstanceComponentGroup componentGroup)
	{
	}

	[Token(Token = "0x60001CF")]
	[Address(RVA = "0x65D1020", Offset = "0x65D0020", VA = "0x65D1020")]
	public GPUInstanceDataBuffer Build(in InstanceNumInfo instanceNumInfo)
	{
		return null;
	}

	[Token(Token = "0x60001D0")]
	[Address(RVA = "0x65D1A20", Offset = "0x65D0A20", VA = "0x65D1A20", Slot = "4")]
	public void Dispose()
	{
	}
}
