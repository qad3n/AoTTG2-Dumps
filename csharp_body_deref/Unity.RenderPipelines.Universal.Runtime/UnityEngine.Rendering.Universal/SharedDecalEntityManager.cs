// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.SharedDecalEntityManager
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x2000174")]
internal class SharedDecalEntityManager : IDisposable
{
	[Token(Token = "0x400086F")]
	[FieldOffset(Offset = "0x10")]
	private DecalEntityManager m_DecalEntityManager;

	[Token(Token = "0x4000870")]
	[FieldOffset(Offset = "0x18")]
	private int m_ReferenceCounter;

	[Token(Token = "0x600085D")]
	[Address(RVA = "0x2C85E60", Offset = "0x2C84460", VA = "0x182C85E60")]
	public DecalEntityManager Get()
	{
		return null;
	}

	[Token(Token = "0x600085E")]
	[Address(RVA = "0x2C86270", Offset = "0x2C84870", VA = "0x182C86270")]
	public void Release(DecalEntityManager decalEntityManager)
	{
	}

	[Token(Token = "0x600085F")]
	[Address(RVA = "0x2C85CD0", Offset = "0x2C842D0", VA = "0x182C85CD0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000860")]
	[Address(RVA = "0x2C86110", Offset = "0x2C84710", VA = "0x182C86110")]
	private void OnDecalAdd(DecalProjector decalProjector)
	{
	}

	[Token(Token = "0x6000861")]
	[Address(RVA = "0x2C86240", Offset = "0x2C84840", VA = "0x182C86240")]
	private void OnDecalRemove(DecalProjector decalProjector)
	{
	}

	[Token(Token = "0x6000862")]
	[Address(RVA = "0x2C861E0", Offset = "0x2C847E0", VA = "0x182C861E0")]
	private void OnDecalPropertyChange(DecalProjector decalProjector)
	{
	}

	[Token(Token = "0x6000863")]
	[Address(RVA = "0x2C860F0", Offset = "0x2C846F0", VA = "0x182C860F0")]
	private void OnAllDecalPropertyChange()
	{
	}

	[Token(Token = "0x6000864")]
	[Address(RVA = "0x2C86170", Offset = "0x2C84770", VA = "0x182C86170")]
	private void OnDecalMaterialChange(DecalProjector decalProjector)
	{
	}

	[Token(Token = "0x6000865")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public SharedDecalEntityManager()
	{
	}
}
