using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Token(Token = "0x200005B")]
public sealed class PostProcessBundle
{
	[Token(Token = "0x4000160")]
	[FieldOffset(Offset = "0x20")]
	private PostProcessEffectRenderer m_Renderer;

	[Token(Token = "0x17000004")]
	public PostProcessAttribute attribute
	{
		[Token(Token = "0x60000E6")]
		[Address(RVA = "0x4826FF0", Offset = "0x4826FF0", VA = "0x4826FF0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60000E7")]
		[Address(RVA = "0x4827000", Offset = "0x4827000", VA = "0x4827000")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public PostProcessEffectSettings settings
	{
		[Token(Token = "0x60000E8")]
		[Address(RVA = "0x4827010", Offset = "0x4827010", VA = "0x4827010")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60000E9")]
		[Address(RVA = "0x4827020", Offset = "0x4827020", VA = "0x4827020")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000006")]
	internal PostProcessEffectRenderer renderer
	{
		[Token(Token = "0x60000EA")]
		[Address(RVA = "0x4827030", Offset = "0x4827030", VA = "0x4827030")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x4827130", Offset = "0x4827130", VA = "0x4827130")]
	internal PostProcessBundle(PostProcessEffectSettings settings)
	{
	}

	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x48271E0", Offset = "0x48271E0", VA = "0x48271E0")]
	internal void Release()
	{
	}

	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x48272D0", Offset = "0x48272D0", VA = "0x48272D0")]
	internal void ResetHistory()
	{
	}

	[Token(Token = "0x60000EE")]
	internal T CastSettings<T>() where T : PostProcessEffectSettings
	{
		return null;
	}

	[Token(Token = "0x60000EF")]
	internal T CastRenderer<T>() where T : PostProcessEffectRenderer
	{
		return null;
	}
}
