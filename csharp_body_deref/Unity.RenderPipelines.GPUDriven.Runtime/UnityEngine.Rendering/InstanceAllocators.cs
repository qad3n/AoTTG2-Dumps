// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.InstanceAllocators
// Update status: NEW in this game update
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
	[Address(RVA = "0x2BDDB90", Offset = "0x2BDC190", VA = "0x182BDDB90")]
	public void Initialize()
	{
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x2BDD770", Offset = "0x2BDBD70", VA = "0x182BDD770")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x2BDD9C0", Offset = "0x2BDBFC0", VA = "0x182BDD9C0")]
	private InstanceAllocator GetInstanceAllocator(InstanceType type)
	{
		return default(InstanceAllocator);
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x2BDDA50", Offset = "0x2BDC050", VA = "0x182BDDA50")]
	public int GetInstanceHandlesLength(InstanceType type)
	{
		return default(int);
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x2BDDAD0", Offset = "0x2BDC0D0", VA = "0x182BDDAD0")]
	public int GetInstancesLength(InstanceType type)
	{
		return default(int);
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x2BDD620", Offset = "0x2BDBC20", VA = "0x182BDD620")]
	public InstanceHandle AllocateInstance(InstanceType type)
	{
		return default(InstanceHandle);
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x2BDD860", Offset = "0x2BDBE60", VA = "0x182BDD860")]
	public void FreeInstance(InstanceHandle instance)
	{
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x2BDD720", Offset = "0x2BDBD20", VA = "0x182BDD720")]
	public SharedInstanceHandle AllocateSharedInstance()
	{
		return default(SharedInstanceHandle);
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x2BDD940", Offset = "0x2BDBF40", VA = "0x182BDD940")]
	public void FreeSharedInstance(SharedInstanceHandle instance)
	{
	}
}
