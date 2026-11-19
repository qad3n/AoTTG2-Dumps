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

[Token(Token = "0x2000381")]
public struct DrawingSettings : IEquatable<DrawingSettings>
{
	[Token(Token = "0x4000A78")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int maxShaderPasses;

	[Token(Token = "0x4000A79")]
	[FieldOffset(Offset = "0x0")]
	private SortingSettings m_SortingSettings;

	[Token(Token = "0x4000A7A")]
	[FieldOffset(Offset = "0x60")]
	internal unsafe fixed int shaderPassNames[16];

	[Token(Token = "0x4000A7B")]
	[FieldOffset(Offset = "0xA0")]
	private PerObjectData m_PerObjectData;

	[Token(Token = "0x4000A7C")]
	[FieldOffset(Offset = "0xA4")]
	private DrawRendererFlags m_Flags;

	[Token(Token = "0x4000A7D")]
	[FieldOffset(Offset = "0xA8")]
	private int m_OverrideShaderID;

	[Token(Token = "0x4000A7E")]
	[FieldOffset(Offset = "0xAC")]
	private int m_OverrideShaderPassIndex;

	[Token(Token = "0x4000A7F")]
	[FieldOffset(Offset = "0xB0")]
	private int m_OverrideMaterialInstanceId;

	[Token(Token = "0x4000A80")]
	[FieldOffset(Offset = "0xB4")]
	private int m_OverrideMaterialPassIndex;

	[Token(Token = "0x4000A81")]
	[FieldOffset(Offset = "0xB8")]
	private int m_fallbackMaterialInstanceId;

	[Token(Token = "0x4000A82")]
	[FieldOffset(Offset = "0xBC")]
	private int m_MainLightIndex;

	[Token(Token = "0x4000A83")]
	[FieldOffset(Offset = "0xC0")]
	private int m_UseSrpBatcher;

	[Token(Token = "0x4000A84")]
	[FieldOffset(Offset = "0xC4")]
	private int m_LodCrossFadeStencilMask;

	[Token(Token = "0x17000340")]
	public PerObjectData perObjectData
	{
		[Token(Token = "0x60015C8")]
		[Address(RVA = "0x695A500", Offset = "0x6959500", VA = "0x695A500")]
		set
		{
		}
	}

	[Token(Token = "0x17000341")]
	public bool enableDynamicBatching
	{
		[Token(Token = "0x60015C9")]
		[Address(RVA = "0x695A510", Offset = "0x6959510", VA = "0x695A510")]
		set
		{
		}
	}

	[Token(Token = "0x17000342")]
	public bool enableInstancing
	{
		[Token(Token = "0x60015CA")]
		[Address(RVA = "0x695A530", Offset = "0x6959530", VA = "0x695A530")]
		set
		{
		}
	}

	[Token(Token = "0x17000343")]
	public Material overrideMaterial
	{
		[Token(Token = "0x60015CB")]
		[Address(RVA = "0x695A550", Offset = "0x6959550", VA = "0x695A550")]
		set
		{
		}
	}

	[Token(Token = "0x17000344")]
	public Shader overrideShader
	{
		[Token(Token = "0x60015CC")]
		[Address(RVA = "0x695A580", Offset = "0x6959580", VA = "0x695A580")]
		set
		{
		}
	}

	[Token(Token = "0x17000345")]
	public int overrideMaterialPassIndex
	{
		[Token(Token = "0x60015CD")]
		[Address(RVA = "0x695A5B0", Offset = "0x69595B0", VA = "0x695A5B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000346")]
	public int overrideShaderPassIndex
	{
		[Token(Token = "0x60015CE")]
		[Address(RVA = "0x695A5C0", Offset = "0x69595C0", VA = "0x695A5C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000347")]
	public int mainLightIndex
	{
		[Token(Token = "0x60015CF")]
		[Address(RVA = "0x695A5D0", Offset = "0x69595D0", VA = "0x695A5D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000348")]
	public int lodCrossFadeStencilMask
	{
		[Token(Token = "0x60015D0")]
		[Address(RVA = "0x695A5E0", Offset = "0x69595E0", VA = "0x695A5E0")]
		set
		{
		}
	}

	[Token(Token = "0x60015C7")]
	[Address(RVA = "0x695A3F0", Offset = "0x69593F0", VA = "0x695A3F0")]
	public DrawingSettings(ShaderTagId shaderPassName, SortingSettings sortingSettings)
	{
	}

	[Token(Token = "0x60015D1")]
	[Address(RVA = "0x695A5F0", Offset = "0x69595F0", VA = "0x695A5F0")]
	public ShaderTagId GetShaderPassName(int index)
	{
		return default(ShaderTagId);
	}

	[Token(Token = "0x60015D2")]
	[Address(RVA = "0x695A740", Offset = "0x6959740", VA = "0x695A740")]
	public void SetShaderPassName(int index, ShaderTagId shaderPassName)
	{
	}

	[Token(Token = "0x60015D3")]
	[Address(RVA = "0x695A890", Offset = "0x6959890", VA = "0x695A890", Slot = "4")]
	public bool Equals(DrawingSettings other)
	{
		return default(bool);
	}

	[Token(Token = "0x60015D4")]
	[Address(RVA = "0x695AB90", Offset = "0x6959B90", VA = "0x695AB90", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60015D5")]
	[Address(RVA = "0x695AC50", Offset = "0x6959C50", VA = "0x695AC50", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60015D6")]
	[Address(RVA = "0x695AE00", Offset = "0x6959E00", VA = "0x695AE00")]
	public static bool operator ==(DrawingSettings left, DrawingSettings right)
	{
		return default(bool);
	}
}
