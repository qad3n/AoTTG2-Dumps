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
		[Address(RVA = "0x32D9CE0", Offset = "0x32D82E0", VA = "0x1832D9CE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000538")]
	[Address(RVA = "0x32D9C40", Offset = "0x32D8240", VA = "0x1832D9C40", Slot = "5")]
	protected override void OnEnable()
	{
	}

	[Token(Token = "0x6000539")]
	[Address(RVA = "0x32D9BA0", Offset = "0x32D81A0", VA = "0x1832D9BA0", Slot = "7")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x600053A")]
	[Address(RVA = "0x32D9B00", Offset = "0x32D8100", VA = "0x1832D9B00", Slot = "13")]
	protected override void OnDidApplyAnimationProperties()
	{
	}

	[Token(Token = "0x600053B")]
	[Address(RVA = "0x32D98B0", Offset = "0x32D7EB0", VA = "0x1832D98B0", Slot = "19")]
	public virtual void ModifyMesh(Mesh mesh)
	{
	}

	[Token(Token = "0x600053C")]
	public abstract void ModifyMesh(VertexHelper vh);

	[Token(Token = "0x600053D")]
	[Address(RVA = "0x190EDA0", Offset = "0x190D3A0", VA = "0x18190EDA0")]
	protected BaseMeshEffect()
	{
	}
}
