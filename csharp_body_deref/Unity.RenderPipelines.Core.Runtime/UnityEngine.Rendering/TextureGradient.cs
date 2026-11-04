// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.TextureGradient
// Update status: NEW in this game update
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
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000EAC")]
		[Address(RVA = "0x560B20", Offset = "0x55F120", VA = "0x180560B20")]
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
		[Address(RVA = "0x2B63C20", Offset = "0x2B62220", VA = "0x182B63C20")]
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
		[Address(RVA = "0x2B63C00", Offset = "0x2B62200", VA = "0x182B63C00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000EAF")]
	[Address(RVA = "0x2B63AF0", Offset = "0x2B620F0", VA = "0x182B63AF0")]
	public TextureGradient(Gradient baseCurve)
	{
	}

	[Token(Token = "0x6000EB0")]
	[Address(RVA = "0x2B63A80", Offset = "0x2B62080", VA = "0x182B63A80")]
	public TextureGradient(GradientColorKey[] colorKeys, GradientAlphaKey[] alphaKeys, GradientMode mode = GradientMode.PerceptualBlend, ColorSpace colorSpace = ColorSpace.Uninitialized, int requestedTextureSize = -1, bool precise = false)
	{
	}

	[Token(Token = "0x6000EB1")]
	[Address(RVA = "0x2B63570", Offset = "0x2B61B70", VA = "0x182B63570")]
	private void Rebuild(GradientColorKey[] colorKeys, GradientAlphaKey[] alphaKeys, GradientMode mode, ColorSpace colorSpace, int requestedTextureSize, bool precise)
	{
	}

	[Token(Token = "0x6000EB2")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000EB3")]
	[Address(RVA = "0x2B63930", Offset = "0x2B61F30", VA = "0x182B63930")]
	public void Release()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000EB4")]
	[Address(RVA = "0x2B639D0", Offset = "0x2B61FD0", VA = "0x182B639D0")]
	public void SetDirty()
	{
	}

	[Token(Token = "0x6000EB5")]
	[Address(RVA = "0x846F50", Offset = "0x845550", VA = "0x180846F50")]
	private static GraphicsFormat GetTextureFormat()
	{
		return default(GraphicsFormat);
	}

	[Token(Token = "0x6000EB6")]
	[Address(RVA = "0x2B63260", Offset = "0x2B61860", VA = "0x182B63260")]
	public Texture2D GetTexture()
	{
		return null;
	}

	[Token(Token = "0x6000EB7")]
	[Address(RVA = "0x2B63200", Offset = "0x2B61800", VA = "0x182B63200")]
	public Color Evaluate(float time)
	{
		return default(Color);
	}

	[Token(Token = "0x6000EB8")]
	[Address(RVA = "0x2B639E0", Offset = "0x2B61FE0", VA = "0x182B639E0")]
	public void SetKeys(GradientColorKey[] colorKeys, GradientAlphaKey[] alphaKeys, GradientMode mode, ColorSpace colorSpace)
	{
	}
}
