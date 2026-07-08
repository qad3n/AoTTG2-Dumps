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
		[Address(RVA = "0x4DC7F20", Offset = "0x4DC7F20", VA = "0x4DC7F20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600052C")]
	[Address(RVA = "0x4DC7FB0", Offset = "0x4DC7FB0", VA = "0x4DC7FB0", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x600052D")]
	[Address(RVA = "0x4DC8050", Offset = "0x4DC8050", VA = "0x4DC8050", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x600052E")]
	[Address(RVA = "0x4DC80E0", Offset = "0x4DC80E0", VA = "0x4DC80E0", Slot = "13")]
	protected override void OnDidApplyAnimationProperties()
	{
	}

	[Token(Token = "0x600052F")]
	[Address(RVA = "0x4DC8170", Offset = "0x4DC8170", VA = "0x4DC8170", Slot = "19")]
	public virtual void ModifyMesh(Mesh mesh)
	{
	}

	[Token(Token = "0x6000530")]
	public abstract void ModifyMesh(VertexHelper vh);

	[Token(Token = "0x6000531")]
	[Address(RVA = "0x4DC8330", Offset = "0x4DC8330", VA = "0x4DC8330")]
	protected BaseMeshEffect()
	{
	}
}
