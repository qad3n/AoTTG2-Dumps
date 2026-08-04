// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.DrawingSettings
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002E7")]
public struct DrawingSettings : IEquatable<DrawingSettings>
{
	[Token(Token = "0x40008A2")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int maxShaderPasses;

	[Token(Token = "0x40008A3")]
	[FieldOffset(Offset = "0x0")]
	private SortingSettings m_SortingSettings;

	[Token(Token = "0x40008A4")]
	[FieldOffset(Offset = "0x60")]
	internal unsafe fixed int shaderPassNames[16];

	[Token(Token = "0x40008A5")]
	[FieldOffset(Offset = "0xA0")]
	private PerObjectData m_PerObjectData;

	[Token(Token = "0x40008A6")]
	[FieldOffset(Offset = "0xA4")]
	private DrawRendererFlags m_Flags;

	[Token(Token = "0x40008A7")]
	[FieldOffset(Offset = "0xA8")]
	private int m_OverrideShaderID;

	[Token(Token = "0x40008A8")]
	[FieldOffset(Offset = "0xAC")]
	private int m_OverrideShaderPassIndex;

	[Token(Token = "0x40008A9")]
	[FieldOffset(Offset = "0xB0")]
	private int m_OverrideMaterialInstanceId;

	[Token(Token = "0x40008AA")]
	[FieldOffset(Offset = "0xB4")]
	private int m_OverrideMaterialPassIndex;

	[Token(Token = "0x40008AB")]
	[FieldOffset(Offset = "0xB8")]
	private int m_fallbackMaterialInstanceId;

	[Token(Token = "0x40008AC")]
	[FieldOffset(Offset = "0xBC")]
	private int m_MainLightIndex;

	[Token(Token = "0x40008AD")]
	[FieldOffset(Offset = "0xC0")]
	private int m_UseSrpBatcher;

	[Token(Token = "0x1700027D")]
	public PerObjectData perObjectData
	{
		[Token(Token = "0x6001033")]
		[Address(RVA = "0x4E2DA30", Offset = "0x4E2DA30", VA = "0x4E2DA30")]
		set
		{
		}
	}

	[Token(Token = "0x1700027E")]
	public Material overrideMaterial
	{
		[Token(Token = "0x6001034")]
		[Address(RVA = "0x4E2DA40", Offset = "0x4E2DA40", VA = "0x4E2DA40")]
		set
		{
		}
	}

	[Token(Token = "0x1700027F")]
	public Shader overrideShader
	{
		[Token(Token = "0x6001035")]
		[Address(RVA = "0x4E2DA70", Offset = "0x4E2DA70", VA = "0x4E2DA70")]
		set
		{
		}
	}

	[Token(Token = "0x17000280")]
	public int overrideMaterialPassIndex
	{
		[Token(Token = "0x6001036")]
		[Address(RVA = "0x4E2DAA0", Offset = "0x4E2DAA0", VA = "0x4E2DAA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000281")]
	public int overrideShaderPassIndex
	{
		[Token(Token = "0x6001037")]
		[Address(RVA = "0x4E2DAB0", Offset = "0x4E2DAB0", VA = "0x4E2DAB0")]
		set
		{
		}
	}

	[Token(Token = "0x6001032")]
	[Address(RVA = "0x4E2D920", Offset = "0x4E2D920", VA = "0x4E2D920")]
	public DrawingSettings(ShaderTagId shaderPassName, SortingSettings sortingSettings)
	{
	}

	[Token(Token = "0x6001038")]
	[Address(RVA = "0x4E2DAC0", Offset = "0x4E2DAC0", VA = "0x4E2DAC0")]
	public ShaderTagId GetShaderPassName(int index)
	{
		return default(ShaderTagId);
	}

	[Token(Token = "0x6001039")]
	[Address(RVA = "0x4E2DC10", Offset = "0x4E2DC10", VA = "0x4E2DC10")]
	public void SetShaderPassName(int index, ShaderTagId shaderPassName)
	{
	}

	[Token(Token = "0x600103A")]
	[Address(RVA = "0x4E2DD60", Offset = "0x4E2DD60", VA = "0x4E2DD60", Slot = "4")]
	public bool Equals(DrawingSettings other)
	{
		return default(bool);
	}

	[Token(Token = "0x600103B")]
	[Address(RVA = "0x4E2E180", Offset = "0x4E2E180", VA = "0x4E2E180", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600103C")]
	[Address(RVA = "0x4E2E250", Offset = "0x4E2E250", VA = "0x4E2E250", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600103D")]
	[Address(RVA = "0x4E2E410", Offset = "0x4E2E410", VA = "0x4E2E410")]
	public static bool operator ==(DrawingSettings left, DrawingSettings right)
	{
		return default(bool);
	}
}
