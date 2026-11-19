// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.PostProcessingPass
// Update status: unchanged since the previous dump
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
	[SerializeField]
	[DontCreateProperty]
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
	[SerializeField]
	[DontCreateProperty]
	private PostProcessingMargins m_WriteMargins;

	[Token(Token = "0x4000876")]
	[FieldOffset(Offset = "0x38")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private PrepareMaterialPropertyBlockDelegate _003CprepareMaterialPropertyBlockCallback_003Ek__BackingField;

	[Token(Token = "0x170002F4")]
	[CreateProperty]
	public Material material
	{
		[Token(Token = "0x6000F53")]
		[Address(RVA = "0x6C72C90", Offset = "0x6C71C90", VA = "0x6C72C90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F54")]
		[Address(RVA = "0x6C72CA0", Offset = "0x6C71CA0", VA = "0x6C72CA0")]
		set
		{
		}
	}

	[Token(Token = "0x170002F5")]
	[CreateProperty]
	public int passIndex
	{
		[Token(Token = "0x6000F55")]
		[Address(RVA = "0x6C72CB0", Offset = "0x6C71CB0", VA = "0x6C72CB0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000F56")]
		[Address(RVA = "0x6C72CC0", Offset = "0x6C71CC0", VA = "0x6C72CC0")]
		set
		{
		}
	}

	[Token(Token = "0x170002F6")]
	[CreateProperty]
	public ParameterBinding[] parameterBindings
	{
		[Token(Token = "0x6000F57")]
		[Address(RVA = "0x6C72CD0", Offset = "0x6C71CD0", VA = "0x6C72CD0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F58")]
		[Address(RVA = "0x6C72CE0", Offset = "0x6C71CE0", VA = "0x6C72CE0")]
		set
		{
		}
	}

	[Token(Token = "0x170002F7")]
	internal PostProcessingMargins readMargins
	{
		[Token(Token = "0x6000F59")]
		[Address(RVA = "0x6C72CF0", Offset = "0x6C71CF0", VA = "0x6C72CF0")]
		get
		{
			return default(PostProcessingMargins);
		}
		[Token(Token = "0x6000F5A")]
		[Address(RVA = "0x6C72D00", Offset = "0x6C71D00", VA = "0x6C72D00")]
		set
		{
		}
	}

	[Token(Token = "0x170002F8")]
	[CreateProperty]
	public PostProcessingMargins writeMargins
	{
		[Token(Token = "0x6000F5B")]
		[Address(RVA = "0x6C72D10", Offset = "0x6C71D10", VA = "0x6C72D10")]
		get
		{
			return default(PostProcessingMargins);
		}
		[Token(Token = "0x6000F5C")]
		[Address(RVA = "0x6C72D20", Offset = "0x6C71D20", VA = "0x6C72D20")]
		set
		{
		}
	}

	[Token(Token = "0x170002F9")]
	public ApplyFilterPassSettingsDelegate applySettingsCallback
	{
		[Token(Token = "0x6000F5D")]
		[Address(RVA = "0x6C72D30", Offset = "0x6C71D30", VA = "0x6C72D30")]
		[CompilerGenerated]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x6000F5E")]
		[Address(RVA = "0x6C72D40", Offset = "0x6C71D40", VA = "0x6C72D40")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002FA")]
	public ComputeRequiredMarginsDelegate computeRequiredReadMarginsCallback
	{
		[Token(Token = "0x6000F5F")]
		[Address(RVA = "0x6C72D50", Offset = "0x6C71D50", VA = "0x6C72D50")]
		[CompilerGenerated]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x6000F60")]
		[Address(RVA = "0x6C72D60", Offset = "0x6C71D60", VA = "0x6C72D60")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002FB")]
	public ComputeRequiredMarginsDelegate computeRequiredWriteMarginsCallback
	{
		[Token(Token = "0x6000F61")]
		[Address(RVA = "0x6C72D70", Offset = "0x6C71D70", VA = "0x6C72D70")]
		[CompilerGenerated]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x6000F62")]
		[Address(RVA = "0x6C72D80", Offset = "0x6C71D80", VA = "0x6C72D80")]
		[CompilerGenerated]
		set
		{
		}
	}
}
