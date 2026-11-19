// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.Universal2DResourceData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20000D4")]
internal class Universal2DResourceData : UniversalResourceDataBase
{
	[Token(Token = "0x40004CC")]
	[FieldOffset(Offset = "0x18")]
	private TextureHandle[][] _lightTextures;

	[Token(Token = "0x40004CD")]
	[FieldOffset(Offset = "0x20")]
	private TextureHandle[] _cameraNormalsTexture;

	[Token(Token = "0x40004CE")]
	[FieldOffset(Offset = "0x28")]
	private TextureHandle _normalsDepth;

	[Token(Token = "0x40004CF")]
	[FieldOffset(Offset = "0x38")]
	private TextureHandle[][] _shadowTextures;

	[Token(Token = "0x40004D0")]
	[FieldOffset(Offset = "0x40")]
	private TextureHandle _shadowDepth;

	[Token(Token = "0x40004D1")]
	[FieldOffset(Offset = "0x50")]
	private TextureHandle _upscaleTexture;

	[Token(Token = "0x40004D2")]
	[FieldOffset(Offset = "0x60")]
	private TextureHandle _cameraSortingLayerTexture;

	[Token(Token = "0x1700018B")]
	internal TextureHandle[][] lightTextures
	{
		[Token(Token = "0x600059E")]
		[Address(RVA = "0x6640ED0", Offset = "0x663FED0", VA = "0x6640ED0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600059F")]
		[Address(RVA = "0x6640EE0", Offset = "0x663FEE0", VA = "0x6640EE0")]
		set
		{
		}
	}

	[Token(Token = "0x1700018C")]
	internal TextureHandle[] normalsTexture
	{
		[Token(Token = "0x60005A0")]
		[Address(RVA = "0x6640EF0", Offset = "0x663FEF0", VA = "0x6640EF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005A1")]
		[Address(RVA = "0x6641050", Offset = "0x6640050", VA = "0x6641050")]
		set
		{
		}
	}

	[Token(Token = "0x1700018D")]
	internal TextureHandle normalsDepth
	{
		[Token(Token = "0x60005A2")]
		[Address(RVA = "0x66411B0", Offset = "0x66401B0", VA = "0x66411B0")]
		get
		{
			return default(TextureHandle);
		}
		[Token(Token = "0x60005A3")]
		[Address(RVA = "0x66412D0", Offset = "0x66402D0", VA = "0x66412D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700018E")]
	internal TextureHandle[][] shadowTextures
	{
		[Token(Token = "0x60005A4")]
		[Address(RVA = "0x66413E0", Offset = "0x66403E0", VA = "0x66413E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005A5")]
		[Address(RVA = "0x66413F0", Offset = "0x66403F0", VA = "0x66413F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700018F")]
	internal TextureHandle shadowDepth
	{
		[Token(Token = "0x60005A6")]
		[Address(RVA = "0x6641400", Offset = "0x6640400", VA = "0x6641400")]
		get
		{
			return default(TextureHandle);
		}
		[Token(Token = "0x60005A7")]
		[Address(RVA = "0x6641410", Offset = "0x6640410", VA = "0x6641410")]
		set
		{
		}
	}

	[Token(Token = "0x17000190")]
	internal TextureHandle upscaleTexture
	{
		[Token(Token = "0x60005A8")]
		[Address(RVA = "0x6641490", Offset = "0x6640490", VA = "0x6641490")]
		get
		{
			return default(TextureHandle);
		}
		[Token(Token = "0x60005A9")]
		[Address(RVA = "0x66414A0", Offset = "0x66404A0", VA = "0x66414A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000191")]
	internal TextureHandle cameraSortingLayerTexture
	{
		[Token(Token = "0x60005AA")]
		[Address(RVA = "0x6641520", Offset = "0x6640520", VA = "0x6641520")]
		get
		{
			return default(TextureHandle);
		}
		[Token(Token = "0x60005AB")]
		[Address(RVA = "0x6641530", Offset = "0x6640530", VA = "0x6641530")]
		set
		{
		}
	}

	[Token(Token = "0x600059C")]
	[Address(RVA = "0x6640B50", Offset = "0x663FB50", VA = "0x6640B50")]
	private TextureHandle[][] CheckAndGetTextureHandle(ref TextureHandle[][] handle)
	{
		return null;
	}

	[Token(Token = "0x600059D")]
	[Address(RVA = "0x6640D60", Offset = "0x663FD60", VA = "0x6640D60")]
	private void CheckAndSetTextureHandle(ref TextureHandle[][] handle, TextureHandle[][] newHandle)
	{
	}

	[Token(Token = "0x60005AC")]
	[Address(RVA = "0x66415B0", Offset = "0x66405B0", VA = "0x66415B0", Slot = "4")]
	public override void Reset()
	{
	}

	[Token(Token = "0x60005AD")]
	[Address(RVA = "0x6641A90", Offset = "0x6640A90", VA = "0x6641A90")]
	public Universal2DResourceData()
	{
	}
}
