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

[Token(Token = "0x2000083")]
[ExecuteAlways]
public abstract class BaseMeshEffect : UIBehaviour, IMeshModifier
{
	[NonSerialized]
	[Token(Token = "0x400026E")]
	[FieldOffset(Offset = "0x20")]
	private Graphic m_Graphic;

	[Token(Token = "0x17000154")]
	protected Graphic graphic
	{
		[Token(Token = "0x600052B")]
		[Address(RVA = "0x50EF870", Offset = "0x50EF870", VA = "0x50EF870")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600052C")]
	[Address(RVA = "0x50EF900", Offset = "0x50EF900", VA = "0x50EF900", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x600052D")]
	[Address(RVA = "0x50EF9A0", Offset = "0x50EF9A0", VA = "0x50EF9A0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x600052E")]
	[Address(RVA = "0x50EFA30", Offset = "0x50EFA30", VA = "0x50EFA30", Slot = "13")]
	protected override void OnDidApplyAnimationProperties()
	{
	}

	[Token(Token = "0x600052F")]
	[Address(RVA = "0x50EFAC0", Offset = "0x50EFAC0", VA = "0x50EFAC0", Slot = "19")]
	public virtual void ModifyMesh(Mesh mesh)
	{
	}

	[Token(Token = "0x6000530")]
	public abstract void ModifyMesh(VertexHelper vh);

	[Token(Token = "0x6000531")]
	[Address(RVA = "0x50EFC80", Offset = "0x50EFC80", VA = "0x50EFC80")]
	protected BaseMeshEffect()
	{
	}
}
