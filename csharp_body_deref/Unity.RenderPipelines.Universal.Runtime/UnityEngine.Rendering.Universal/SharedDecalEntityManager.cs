// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.SharedDecalEntityManager
// Update status: unchanged since the previous dump
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
	[Address(RVA = "0x667CD80", Offset = "0x667BD80", VA = "0x667CD80")]
	public DecalEntityManager Get()
	{
		return null;
	}

	[Token(Token = "0x600085E")]
	[Address(RVA = "0x667D010", Offset = "0x667C010", VA = "0x667D010")]
	public void Release(DecalEntityManager decalEntityManager)
	{
	}

	[Token(Token = "0x600085F")]
	[Address(RVA = "0x667D030", Offset = "0x667C030", VA = "0x667D030", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000860")]
	[Address(RVA = "0x667D1D0", Offset = "0x667C1D0", VA = "0x667D1D0")]
	private void OnDecalAdd(DecalProjector decalProjector)
	{
	}

	[Token(Token = "0x6000861")]
	[Address(RVA = "0x667D220", Offset = "0x667C220", VA = "0x667D220")]
	private void OnDecalRemove(DecalProjector decalProjector)
	{
	}

	[Token(Token = "0x6000862")]
	[Address(RVA = "0x667D240", Offset = "0x667C240", VA = "0x667D240")]
	private void OnDecalPropertyChange(DecalProjector decalProjector)
	{
	}

	[Token(Token = "0x6000863")]
	[Address(RVA = "0x667D2A0", Offset = "0x667C2A0", VA = "0x667D2A0")]
	private void OnAllDecalPropertyChange()
	{
	}

	[Token(Token = "0x6000864")]
	[Address(RVA = "0x667D2C0", Offset = "0x667C2C0", VA = "0x667D2C0")]
	private void OnDecalMaterialChange(DecalProjector decalProjector)
	{
	}

	[Token(Token = "0x6000865")]
	[Address(RVA = "0x667D320", Offset = "0x667C320", VA = "0x667D320")]
	public SharedDecalEntityManager()
	{
	}
}
