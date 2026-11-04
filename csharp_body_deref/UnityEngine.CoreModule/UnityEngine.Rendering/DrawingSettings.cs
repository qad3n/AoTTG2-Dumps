// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.DrawingSettings
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20003AC")]
public struct DrawingSettings : IEquatable<DrawingSettings>
{
	[Token(Token = "0x4000B94")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int maxShaderPasses;

	[Token(Token = "0x4000B95")]
	[FieldOffset(Offset = "0x0")]
	private SortingSettings m_SortingSettings;

	[Token(Token = "0x4000B96")]
	[FieldOffset(Offset = "0x60")]
	internal unsafe fixed int shaderPassNames[16];

	[Token(Token = "0x4000B97")]
	[FieldOffset(Offset = "0xA0")]
	private PerObjectData m_PerObjectData;

	[Token(Token = "0x4000B98")]
	[FieldOffset(Offset = "0xA4")]
	private DrawRendererFlags m_Flags;

	[Token(Token = "0x4000B99")]
	[FieldOffset(Offset = "0xA8")]
	private int m_OverrideShaderID;

	[Token(Token = "0x4000B9A")]
	[FieldOffset(Offset = "0xAC")]
	private int m_OverrideShaderPassIndex;

	[Token(Token = "0x4000B9B")]
	[FieldOffset(Offset = "0xB0")]
	private int m_OverrideMaterialInstanceId;

	[Token(Token = "0x4000B9C")]
	[FieldOffset(Offset = "0xB4")]
	private int m_OverrideMaterialPassIndex;

	[Token(Token = "0x4000B9D")]
	[FieldOffset(Offset = "0xB8")]
	private int m_fallbackMaterialInstanceId;

	[Token(Token = "0x4000B9E")]
	[FieldOffset(Offset = "0xBC")]
	private int m_MainLightIndex;

	[Token(Token = "0x4000B9F")]
	[FieldOffset(Offset = "0xC0")]
	private int m_UseSrpBatcher;

	[Token(Token = "0x4000BA0")]
	[FieldOffset(Offset = "0xC4")]
	private int m_LodCrossFadeStencilMask;

	[Token(Token = "0x17000352")]
	public PerObjectData perObjectData
	{
		[Token(Token = "0x6001623")]
		[Address(RVA = "0x2B0A850", Offset = "0x2B08E50", VA = "0x182B0A850")]
		set
		{
		}
	}

	[Token(Token = "0x17000353")]
	public bool enableDynamicBatching
	{
		[Token(Token = "0x6001624")]
		[Address(RVA = "0x2F654A0", Offset = "0x2F63AA0", VA = "0x182F654A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000354")]
	public bool enableInstancing
	{
		[Token(Token = "0x6001625")]
		[Address(RVA = "0x2F654C0", Offset = "0x2F63AC0", VA = "0x182F654C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000355")]
	public Material overrideMaterial
	{
		[Token(Token = "0x6001626")]
		[Address(RVA = "0x2F654E0", Offset = "0x2F63AE0", VA = "0x182F654E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000356")]
	public Shader overrideShader
	{
		[Token(Token = "0x6001627")]
		[Address(RVA = "0x2F65520", Offset = "0x2F63B20", VA = "0x182F65520")]
		set
		{
		}
	}

	[Token(Token = "0x17000357")]
	public int overrideMaterialPassIndex
	{
		[Token(Token = "0x6001628")]
		[Address(RVA = "0x2C12350", Offset = "0x2C10950", VA = "0x182C12350")]
		set
		{
		}
	}

	[Token(Token = "0x17000358")]
	public int overrideShaderPassIndex
	{
		[Token(Token = "0x6001629")]
		[Address(RVA = "0x1CAC5B0", Offset = "0x1CAABB0", VA = "0x181CAC5B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000359")]
	public int mainLightIndex
	{
		[Token(Token = "0x600162A")]
		[Address(RVA = "0x2C12340", Offset = "0x2C10940", VA = "0x182C12340")]
		set
		{
		}
	}

	[Token(Token = "0x1700035A")]
	public int lodCrossFadeStencilMask
	{
		[Token(Token = "0x600162B")]
		[Address(RVA = "0xB5BC40", Offset = "0xB5A240", VA = "0x180B5BC40")]
		set
		{
		}
	}

	[Token(Token = "0x6001622")]
	[Address(RVA = "0x2F652B0", Offset = "0x2F638B0", VA = "0x182F652B0")]
	public DrawingSettings(ShaderTagId shaderPassName, SortingSettings sortingSettings)
	{
	}

	[Token(Token = "0x600162C")]
	[Address(RVA = "0x2F65000", Offset = "0x2F63600", VA = "0x182F65000")]
	public ShaderTagId GetShaderPassName(int index)
	{
		return default(ShaderTagId);
	}

	[Token(Token = "0x600162D")]
	[Address(RVA = "0x2F65130", Offset = "0x2F63730", VA = "0x182F65130")]
	public void SetShaderPassName(int index, ShaderTagId shaderPassName)
	{
	}

	[Token(Token = "0x600162E")]
	[Address(RVA = "0x2F64DA0", Offset = "0x2F633A0", VA = "0x182F64DA0", Slot = "4")]
	public bool Equals(DrawingSettings other)
	{
		return default(bool);
	}

	[Token(Token = "0x600162F")]
	[Address(RVA = "0x2F64C40", Offset = "0x2F63240", VA = "0x182F64C40", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001630")]
	[Address(RVA = "0x2F64F90", Offset = "0x2F63590", VA = "0x182F64F90", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001631")]
	[Address(RVA = "0x2F653A0", Offset = "0x2F639A0", VA = "0x182F653A0")]
	public static bool operator ==(DrawingSettings left, DrawingSettings right)
	{
		return default(bool);
	}
}
