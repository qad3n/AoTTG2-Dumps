// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.PostProcessingPass
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x200024F")]
public struct PostProcessingPass
{
	[Token(Token = "0x2000250")]
	[Obsolete("This delegate will be removed. Use ApplyFilterPassSettingsDelegate instead.")]
	public delegate void PrepareMaterialPropertyBlockDelegate(MaterialPropertyBlock mpb, FilterFunction func);

	[Token(Token = "0x2000251")]
	public delegate void ApplyFilterPassSettingsDelegate(MaterialPropertyBlock mpb, FilterPassContext context);

	[Token(Token = "0x2000252")]
	public delegate PostProcessingMargins ComputeRequiredMarginsDelegate(FilterFunction func);

	[Token(Token = "0x4000871")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	[DontCreateProperty]
	private Material m_Material;

	[Token(Token = "0x4000872")]
	[FieldOffset(Offset = "0x8")]
	[DontCreateProperty]
	[SerializeField]
	private int m_PassIndex;

	[Token(Token = "0x4000873")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	[DontCreateProperty]
	private ParameterBinding[] m_ParameterBindings;

	[Token(Token = "0x4000874")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private PostProcessingMargins m_ReadMargins;

	[Token(Token = "0x4000875")]
	[FieldOffset(Offset = "0x28")]
	[DontCreateProperty]
	[SerializeField]
	private PostProcessingMargins m_WriteMargins;

	[Token(Token = "0x4000876")]
	[FieldOffset(Offset = "0x38")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private PrepareMaterialPropertyBlockDelegate _003CprepareMaterialPropertyBlockCallback_003Ek__BackingField;

	[Token(Token = "0x170002F4")]
	[CreateProperty]
	public Material material
	{
		[Token(Token = "0x6000F53")]
		[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F54")]
		[Address(RVA = "0xD25150", Offset = "0xD23750", VA = "0x180D25150")]
		set
		{
		}
	}

	[Token(Token = "0x170002F5")]
	[CreateProperty]
	public int passIndex
	{
		[Token(Token = "0x6000F55")]
		[Address(RVA = "0x57AEE0", Offset = "0x5794E0", VA = "0x18057AEE0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000F56")]
		[Address(RVA = "0x57AF20", Offset = "0x579520", VA = "0x18057AF20")]
		set
		{
		}
	}

	[Token(Token = "0x170002F6")]
	[CreateProperty]
	public ParameterBinding[] parameterBindings
	{
		[Token(Token = "0x6000F57")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F58")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		set
		{
		}
	}

	[Token(Token = "0x170002F7")]
	internal PostProcessingMargins readMargins
	{
		[Token(Token = "0x6000F59")]
		[Address(RVA = "0x8E7990", Offset = "0x8E5F90", VA = "0x1808E7990")]
		get
		{
			return default(PostProcessingMargins);
		}
		[Token(Token = "0x6000F5A")]
		[Address(RVA = "0x111C9E0", Offset = "0x111AFE0", VA = "0x18111C9E0")]
		set
		{
		}
	}

	[Token(Token = "0x170002F8")]
	[CreateProperty]
	public PostProcessingMargins writeMargins
	{
		[Token(Token = "0x6000F5B")]
		[Address(RVA = "0x181CEB0", Offset = "0x181B4B0", VA = "0x18181CEB0")]
		get
		{
			return default(PostProcessingMargins);
		}
		[Token(Token = "0x6000F5C")]
		[Address(RVA = "0x1B040F0", Offset = "0x1B026F0", VA = "0x181B040F0")]
		set
		{
		}
	}

	[Token(Token = "0x170002F9")]
	public ApplyFilterPassSettingsDelegate applySettingsCallback
	{
		[Token(Token = "0x6000F5D")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		[CompilerGenerated]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x6000F5E")]
		[Address(RVA = "0xE8F700", Offset = "0xE8DD00", VA = "0x180E8F700")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002FA")]
	public ComputeRequiredMarginsDelegate computeRequiredReadMarginsCallback
	{
		[Token(Token = "0x6000F5F")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		[CompilerGenerated]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x6000F60")]
		[Address(RVA = "0xF1DB10", Offset = "0xF1C110", VA = "0x180F1DB10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002FB")]
	public ComputeRequiredMarginsDelegate computeRequiredWriteMarginsCallback
	{
		[Token(Token = "0x6000F61")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		[CompilerGenerated]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x6000F62")]
		[Address(RVA = "0xF1D7F0", Offset = "0xF1BDF0", VA = "0x180F1D7F0")]
		[CompilerGenerated]
		set
		{
		}
	}
}
