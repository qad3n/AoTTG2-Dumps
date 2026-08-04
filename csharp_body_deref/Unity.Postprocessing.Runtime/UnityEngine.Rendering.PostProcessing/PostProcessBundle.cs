// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PostProcessing.PostProcessBundle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4B4C0E0", Offset = "0x4B4C0E0", VA = "0x4B4C0E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60000E7")]
		[Address(RVA = "0x4B4C0F0", Offset = "0x4B4C0F0", VA = "0x4B4C0F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public PostProcessEffectSettings settings
	{
		[Token(Token = "0x60000E8")]
		[Address(RVA = "0x4B4C100", Offset = "0x4B4C100", VA = "0x4B4C100")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60000E9")]
		[Address(RVA = "0x4B4C110", Offset = "0x4B4C110", VA = "0x4B4C110")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000006")]
	internal PostProcessEffectRenderer renderer
	{
		[Token(Token = "0x60000EA")]
		[Address(RVA = "0x4B4C120", Offset = "0x4B4C120", VA = "0x4B4C120")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x4B4C220", Offset = "0x4B4C220", VA = "0x4B4C220")]
	internal PostProcessBundle(PostProcessEffectSettings settings)
	{
	}

	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x4B4C2D0", Offset = "0x4B4C2D0", VA = "0x4B4C2D0")]
	internal void Release()
	{
	}

	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x4B4C3C0", Offset = "0x4B4C3C0", VA = "0x4B4C3C0")]
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
