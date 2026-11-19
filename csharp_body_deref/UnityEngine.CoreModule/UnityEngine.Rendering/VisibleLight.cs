// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.VisibleLight
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x20003A6")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct VisibleLight : IEquatable<VisibleLight>
{
	[Token(Token = "0x4000B5B")]
	[FieldOffset(Offset = "0x0")]
	private LightType m_LightType;

	[Token(Token = "0x4000B5C")]
	[FieldOffset(Offset = "0x4")]
	private Color m_FinalColor;

	[Token(Token = "0x4000B5D")]
	[FieldOffset(Offset = "0x14")]
	private Rect m_ScreenRect;

	[Token(Token = "0x4000B5E")]
	[FieldOffset(Offset = "0x24")]
	private Matrix4x4 m_LocalToWorldMatrix;

	[Token(Token = "0x4000B5F")]
	[FieldOffset(Offset = "0x64")]
	private float m_Range;

	[Token(Token = "0x4000B60")]
	[FieldOffset(Offset = "0x68")]
	private float m_SpotAngle;

	[Token(Token = "0x4000B61")]
	[FieldOffset(Offset = "0x6C")]
	private float m_InnerSpotAngle;

	[Token(Token = "0x4000B62")]
	[FieldOffset(Offset = "0x70")]
	private Vector2 m_AreaSize;

	[Token(Token = "0x4000B63")]
	[FieldOffset(Offset = "0x78")]
	private int m_InstanceId;

	[Token(Token = "0x4000B64")]
	[FieldOffset(Offset = "0x7C")]
	private VisibleLightFlags m_Flags;

	[Token(Token = "0x170003A6")]
	public Light light
	{
		[Token(Token = "0x6001703")]
		[Address(RVA = "0x6963C30", Offset = "0x6962C30", VA = "0x6963C30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003A7")]
	public LightType lightType
	{
		[Token(Token = "0x6001704")]
		[Address(RVA = "0x6963CB0", Offset = "0x6962CB0", VA = "0x6963CB0")]
		get
		{
			return default(LightType);
		}
	}

	[Token(Token = "0x170003A8")]
	public Color finalColor
	{
		[Token(Token = "0x6001705")]
		[Address(RVA = "0x6963CC0", Offset = "0x6962CC0", VA = "0x6963CC0")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x170003A9")]
	public Matrix4x4 localToWorldMatrix
	{
		[Token(Token = "0x6001706")]
		[Address(RVA = "0x6963CD0", Offset = "0x6962CD0", VA = "0x6963CD0")]
		get
		{
			return default(Matrix4x4);
		}
	}

	[Token(Token = "0x170003AA")]
	public float range
	{
		[Token(Token = "0x6001707")]
		[Address(RVA = "0x6963D00", Offset = "0x6962D00", VA = "0x6963D00")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170003AB")]
	public float spotAngle
	{
		[Token(Token = "0x6001708")]
		[Address(RVA = "0x6963D10", Offset = "0x6962D10", VA = "0x6963D10")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6001709")]
	[Address(RVA = "0x6963D20", Offset = "0x6962D20", VA = "0x6963D20", Slot = "4")]
	public bool Equals(VisibleLight other)
	{
		return default(bool);
	}

	[Token(Token = "0x600170A")]
	[Address(RVA = "0x6963F90", Offset = "0x6962F90", VA = "0x6963F90", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600170B")]
	[Address(RVA = "0x69640C0", Offset = "0x69630C0", VA = "0x69640C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
