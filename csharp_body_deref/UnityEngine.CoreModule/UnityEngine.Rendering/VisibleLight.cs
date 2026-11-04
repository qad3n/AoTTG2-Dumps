// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.VisibleLight
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x20003D2")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct VisibleLight : IEquatable<VisibleLight>
{
	[Token(Token = "0x4000C7B")]
	[FieldOffset(Offset = "0x0")]
	private LightType m_LightType;

	[Token(Token = "0x4000C7C")]
	[FieldOffset(Offset = "0x4")]
	private Color m_FinalColor;

	[Token(Token = "0x4000C7D")]
	[FieldOffset(Offset = "0x14")]
	private Rect m_ScreenRect;

	[Token(Token = "0x4000C7E")]
	[FieldOffset(Offset = "0x24")]
	private Matrix4x4 m_LocalToWorldMatrix;

	[Token(Token = "0x4000C7F")]
	[FieldOffset(Offset = "0x64")]
	private float m_Range;

	[Token(Token = "0x4000C80")]
	[FieldOffset(Offset = "0x68")]
	private float m_SpotAngle;

	[Token(Token = "0x4000C81")]
	[FieldOffset(Offset = "0x6C")]
	private float m_InnerSpotAngle;

	[Token(Token = "0x4000C82")]
	[FieldOffset(Offset = "0x70")]
	private Vector2 m_AreaSize;

	[Token(Token = "0x4000C83")]
	[FieldOffset(Offset = "0x78")]
	private int m_InstanceId;

	[Token(Token = "0x4000C84")]
	[FieldOffset(Offset = "0x7C")]
	private VisibleLightFlags m_Flags;

	[Token(Token = "0x170003B8")]
	public Light light
	{
		[Token(Token = "0x600175E")]
		[Address(RVA = "0x2F76390", Offset = "0x2F74990", VA = "0x182F76390")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003B9")]
	public LightType lightType
	{
		[Token(Token = "0x600175F")]
		[Address(RVA = "0xD18930", Offset = "0xD16F30", VA = "0x180D18930")]
		get
		{
			return default(LightType);
		}
	}

	[Token(Token = "0x170003BA")]
	public Color finalColor
	{
		[Token(Token = "0x6001760")]
		[Address(RVA = "0x2F76380", Offset = "0x2F74980", VA = "0x182F76380")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x170003BB")]
	public Matrix4x4 localToWorldMatrix
	{
		[Token(Token = "0x6001761")]
		[Address(RVA = "0x2F76420", Offset = "0x2F74A20", VA = "0x182F76420")]
		get
		{
			return default(Matrix4x4);
		}
	}

	[Token(Token = "0x170003BC")]
	public float range
	{
		[Token(Token = "0x6001762")]
		[Address(RVA = "0x2F76450", Offset = "0x2F74A50", VA = "0x182F76450")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170003BD")]
	public float spotAngle
	{
		[Token(Token = "0x6001763")]
		[Address(RVA = "0x2F76460", Offset = "0x2F74A60", VA = "0x182F76460")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6001764")]
	[Address(RVA = "0x2F75E10", Offset = "0x2F74410", VA = "0x182F75E10", Slot = "4")]
	public bool Equals(VisibleLight other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001765")]
	[Address(RVA = "0x2F76100", Offset = "0x2F74700", VA = "0x182F76100", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001766")]
	[Address(RVA = "0x2F76200", Offset = "0x2F74800", VA = "0x182F76200", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
