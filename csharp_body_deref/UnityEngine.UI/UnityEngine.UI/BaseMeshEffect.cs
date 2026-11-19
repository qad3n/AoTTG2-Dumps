// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.BaseMeshEffect
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.EventSystems;

namespace UnityEngine.UI;

[Token(Token = "0x2000081")]
[ExecuteAlways]
public abstract class BaseMeshEffect : UIBehaviour, IMeshModifier
{
	[NonSerialized]
	[Token(Token = "0x400026E")]
	[FieldOffset(Offset = "0x20")]
	private Graphic m_Graphic;

	[Token(Token = "0x17000155")]
	protected Graphic graphic
	{
		[Token(Token = "0x6000537")]
		[Address(RVA = "0x6CFF730", Offset = "0x6CFE730", VA = "0x6CFF730")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000538")]
	[Address(RVA = "0x6CFF7C0", Offset = "0x6CFE7C0", VA = "0x6CFF7C0", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x6000539")]
	[Address(RVA = "0x6CFF860", Offset = "0x6CFE860", VA = "0x6CFF860", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x600053A")]
	[Address(RVA = "0x6CFF8F0", Offset = "0x6CFE8F0", VA = "0x6CFF8F0", Slot = "13")]
	protected override void OnDidApplyAnimationProperties()
	{
	}

	[Token(Token = "0x600053B")]
	[Address(RVA = "0x6CFF980", Offset = "0x6CFE980", VA = "0x6CFF980", Slot = "19")]
	public virtual void ModifyMesh(Mesh mesh)
	{
	}

	[Token(Token = "0x600053C")]
	public abstract void ModifyMesh(VertexHelper vh);

	[Token(Token = "0x600053D")]
	[Address(RVA = "0x6CFFAF0", Offset = "0x6CFEAF0", VA = "0x6CFFAF0")]
	protected BaseMeshEffect()
	{
	}
}
