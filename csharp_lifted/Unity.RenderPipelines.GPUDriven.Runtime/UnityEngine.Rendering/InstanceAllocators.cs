// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.InstanceAllocators
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000075")]
internal struct InstanceAllocators
{
	[Token(Token = "0x400020F")]
	[FieldOffset(Offset = "0x0")]
	private InstanceAllocator m_InstanceAlloc_MeshRenderer;

	[Token(Token = "0x4000210")]
	[FieldOffset(Offset = "0x20")]
	private InstanceAllocator m_InstanceAlloc_SpeedTree;

	[Token(Token = "0x4000211")]
	[FieldOffset(Offset = "0x40")]
	private InstanceAllocator m_SharedInstanceAlloc;

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x65D3C80", Offset = "0x65D2C80", VA = "0x65D3C80")]
	public void Initialize()
	{
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x65D3E80", Offset = "0x65D2E80", VA = "0x65D3E80")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x65D3F70", Offset = "0x65D2F70", VA = "0x65D3F70")]
	private InstanceAllocator GetInstanceAllocator(InstanceType type)
	{
		return default(InstanceAllocator);
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x65D3FE0", Offset = "0x65D2FE0", VA = "0x65D3FE0")]
	public int GetInstanceHandlesLength(InstanceType type)
	{
		return default(int);
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x65D4040", Offset = "0x65D3040", VA = "0x65D4040")]
	public int GetInstancesLength(InstanceType type)
	{
		return default(int);
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x65D40F0", Offset = "0x65D30F0", VA = "0x65D40F0")]
	public InstanceHandle AllocateInstance(InstanceType type)
	{
		return default(InstanceHandle);
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x65D4200", Offset = "0x65D3200", VA = "0x65D4200")]
	public void FreeInstance(InstanceHandle instance)
	{
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x65D4320", Offset = "0x65D3320", VA = "0x65D4320")]
	public SharedInstanceHandle AllocateSharedInstance()
	{
		return default(SharedInstanceHandle);
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x65D4370", Offset = "0x65D3370", VA = "0x65D4370")]
	public void FreeSharedInstance(SharedInstanceHandle instance)
	{
	}
}
