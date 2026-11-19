// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.TextureGradient
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x20001ED")]
public class TextureGradient : IDisposable
{
	[Token(Token = "0x400096C")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private Gradient m_Gradient;

	[Token(Token = "0x400096D")]
	[FieldOffset(Offset = "0x20")]
	private Texture2D m_Texture;

	[Token(Token = "0x400096E")]
	[FieldOffset(Offset = "0x28")]
	private int m_RequestedTextureSize;

	[Token(Token = "0x400096F")]
	[FieldOffset(Offset = "0x2C")]
	private bool m_IsTextureDirty;

	[Token(Token = "0x4000970")]
	[FieldOffset(Offset = "0x2D")]
	private bool m_Precise;

	[Token(Token = "0x4000971")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	[HideInInspector]
	public GradientMode mode;

	[Token(Token = "0x4000972")]
	[FieldOffset(Offset = "0x34")]
	[SerializeField]
	[HideInInspector]
	public ColorSpace colorSpace;

	[Token(Token = "0x170001DC")]
	public int textureSize
	{
		[Token(Token = "0x6000EAB")]
		[Address(RVA = "0x65506E0", Offset = "0x654F6E0", VA = "0x65506E0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000EAC")]
		[Address(RVA = "0x65506F0", Offset = "0x654F6F0", VA = "0x65506F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001DD")]
	[HideInInspector]
	public GradientColorKey[] colorKeys
	{
		[Token(Token = "0x6000EAD")]
		[Address(RVA = "0x6550700", Offset = "0x654F700", VA = "0x6550700")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DE")]
	[HideInInspector]
	public GradientAlphaKey[] alphaKeys
	{
		[Token(Token = "0x6000EAE")]
		[Address(RVA = "0x6550720", Offset = "0x654F720", VA = "0x6550720")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000EAF")]
	[Address(RVA = "0x6550740", Offset = "0x654F740", VA = "0x6550740")]
	public TextureGradient(Gradient baseCurve)
	{
	}

	[Token(Token = "0x6000EB0")]
	[Address(RVA = "0x6550830", Offset = "0x654F830", VA = "0x6550830")]
	public TextureGradient(GradientColorKey[] colorKeys, GradientAlphaKey[] alphaKeys, GradientMode mode = GradientMode.PerceptualBlend, ColorSpace colorSpace = ColorSpace.Uninitialized, int requestedTextureSize = -1, bool precise = false)
	{
	}

	[Token(Token = "0x6000EB1")]
	[Address(RVA = "0x65508A0", Offset = "0x654F8A0", VA = "0x65508A0")]
	private void Rebuild(GradientColorKey[] colorKeys, GradientAlphaKey[] alphaKeys, GradientMode mode, ColorSpace colorSpace, int requestedTextureSize, bool precise)
	{
	}

	[Token(Token = "0x6000EB2")]
	[Address(RVA = "0x6550DE0", Offset = "0x654FDE0", VA = "0x6550DE0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000EB3")]
	[Address(RVA = "0x6550DF0", Offset = "0x654FDF0", VA = "0x6550DF0")]
	public void Release()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000EB4")]
	[Address(RVA = "0x6550EF0", Offset = "0x654FEF0", VA = "0x6550EF0")]
	public void SetDirty()
	{
	}

	[Token(Token = "0x6000EB5")]
	[Address(RVA = "0x6550F00", Offset = "0x654FF00", VA = "0x6550F00")]
	private static GraphicsFormat GetTextureFormat()
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x6000EB6")]
	[Address(RVA = "0x6550F10", Offset = "0x654FF10", VA = "0x6550F10")]
	public Texture2D GetTexture()
	{
		return null;
	}

	[Token(Token = "0x6000EB7")]
	[Address(RVA = "0x6551210", Offset = "0x6550210", VA = "0x6551210")]
	public Color Evaluate(float time)
	{
		return default(Color);
	}

	[Token(Token = "0x6000EB8")]
	[Address(RVA = "0x6551240", Offset = "0x6550240", VA = "0x6551240")]
	public void SetKeys(GradientColorKey[] colorKeys, GradientAlphaKey[] alphaKeys, GradientMode mode, ColorSpace colorSpace)
	{
	}
}
