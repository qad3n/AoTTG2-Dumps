using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002E4")]
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

	[Token(Token = "0x1700027C")]
	public PerObjectData perObjectData
	{
		[Token(Token = "0x6001031")]
		[Address(RVA = "0x4B06100", Offset = "0x4B06100", VA = "0x4B06100")]
		set
		{
		}
	}

	[Token(Token = "0x1700027D")]
	public Material overrideMaterial
	{
		[Token(Token = "0x6001032")]
		[Address(RVA = "0x4B06110", Offset = "0x4B06110", VA = "0x4B06110")]
		set
		{
		}
	}

	[Token(Token = "0x1700027E")]
	public Shader overrideShader
	{
		[Token(Token = "0x6001033")]
		[Address(RVA = "0x4B06140", Offset = "0x4B06140", VA = "0x4B06140")]
		set
		{
		}
	}

	[Token(Token = "0x1700027F")]
	public int overrideMaterialPassIndex
	{
		[Token(Token = "0x6001034")]
		[Address(RVA = "0x4B06170", Offset = "0x4B06170", VA = "0x4B06170")]
		set
		{
		}
	}

	[Token(Token = "0x17000280")]
	public int overrideShaderPassIndex
	{
		[Token(Token = "0x6001035")]
		[Address(RVA = "0x4B06180", Offset = "0x4B06180", VA = "0x4B06180")]
		set
		{
		}
	}

	[Token(Token = "0x6001030")]
	[Address(RVA = "0x4B05FF0", Offset = "0x4B05FF0", VA = "0x4B05FF0")]
	public DrawingSettings(ShaderTagId shaderPassName, SortingSettings sortingSettings)
	{
	}

	[Token(Token = "0x6001036")]
	[Address(RVA = "0x4B06190", Offset = "0x4B06190", VA = "0x4B06190")]
	public ShaderTagId GetShaderPassName(int index)
	{
		return default(ShaderTagId);
	}

	[Token(Token = "0x6001037")]
	[Address(RVA = "0x4B062E0", Offset = "0x4B062E0", VA = "0x4B062E0")]
	public void SetShaderPassName(int index, ShaderTagId shaderPassName)
	{
	}

	[Token(Token = "0x6001038")]
	[Address(RVA = "0x4B06430", Offset = "0x4B06430", VA = "0x4B06430", Slot = "4")]
	public bool Equals(DrawingSettings other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001039")]
	[Address(RVA = "0x4B06850", Offset = "0x4B06850", VA = "0x4B06850", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600103A")]
	[Address(RVA = "0x4B06920", Offset = "0x4B06920", VA = "0x4B06920", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600103B")]
	[Address(RVA = "0x4B06AE0", Offset = "0x4B06AE0", VA = "0x4B06AE0")]
	public static bool operator ==(DrawingSettings left, DrawingSettings right)
	{
		return default(bool);
	}
}
