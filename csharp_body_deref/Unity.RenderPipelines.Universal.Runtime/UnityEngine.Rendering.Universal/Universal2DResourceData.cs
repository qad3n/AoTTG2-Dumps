// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.Universal2DResourceData
// Update status: NEW in this game update
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
		[Address(RVA = "0x2C417C0", Offset = "0x2C3FDC0", VA = "0x182C417C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600059F")]
		[Address(RVA = "0x2C41900", Offset = "0x2C3FF00", VA = "0x182C41900")]
		set
		{
		}
	}

	[Token(Token = "0x1700018C")]
	internal TextureHandle[] normalsTexture
	{
		[Token(Token = "0x60005A0")]
		[Address(RVA = "0x2C41800", Offset = "0x2C3FE00", VA = "0x182C41800")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005A1")]
		[Address(RVA = "0x2C41990", Offset = "0x2C3FF90", VA = "0x182C41990")]
		set
		{
		}
	}

	[Token(Token = "0x1700018D")]
	internal TextureHandle normalsDepth
	{
		[Token(Token = "0x60005A2")]
		[Address(RVA = "0x2C417D0", Offset = "0x2C3FDD0", VA = "0x182C417D0")]
		get
		{
			return default(TextureHandle);
		}
		[Token(Token = "0x60005A3")]
		[Address(RVA = "0x2C41910", Offset = "0x2C3FF10", VA = "0x182C41910")]
		set
		{
		}
	}

	[Token(Token = "0x1700018E")]
	internal TextureHandle[][] shadowTextures
	{
		[Token(Token = "0x60005A4")]
		[Address(RVA = "0x2C41840", Offset = "0x2C3FE40", VA = "0x182C41840")]
		get
		{
			return null;
		}
		[Token(Token = "0x60005A5")]
		[Address(RVA = "0x2C41A20", Offset = "0x2C40020", VA = "0x182C41A20")]
		set
		{
		}
	}

	[Token(Token = "0x1700018F")]
	internal TextureHandle shadowDepth
	{
		[Token(Token = "0x60005A6")]
		[Address(RVA = "0x2C41810", Offset = "0x2C3FE10", VA = "0x182C41810")]
		get
		{
			return default(TextureHandle);
		}
		[Token(Token = "0x60005A7")]
		[Address(RVA = "0x2C419A0", Offset = "0x2C3FFA0", VA = "0x182C419A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000190")]
	internal TextureHandle upscaleTexture
	{
		[Token(Token = "0x60005A8")]
		[Address(RVA = "0x2C41850", Offset = "0x2C3FE50", VA = "0x182C41850")]
		get
		{
			return default(TextureHandle);
		}
		[Token(Token = "0x60005A9")]
		[Address(RVA = "0x2C41A30", Offset = "0x2C40030", VA = "0x182C41A30")]
		set
		{
		}
	}

	[Token(Token = "0x17000191")]
	internal TextureHandle cameraSortingLayerTexture
	{
		[Token(Token = "0x60005AA")]
		[Address(RVA = "0x2C41790", Offset = "0x2C3FD90", VA = "0x182C41790")]
		get
		{
			return default(TextureHandle);
		}
		[Token(Token = "0x60005AB")]
		[Address(RVA = "0x2C41880", Offset = "0x2C3FE80", VA = "0x182C41880")]
		set
		{
		}
	}

	[Token(Token = "0x600059C")]
	[Address(RVA = "0x2C41070", Offset = "0x2C3F670", VA = "0x182C41070")]
	private TextureHandle[][] CheckAndGetTextureHandle(ref TextureHandle[][] handle)
	{
		return null;
	}

	[Token(Token = "0x600059D")]
	[Address(RVA = "0x2C411E0", Offset = "0x2C3F7E0", VA = "0x182C411E0")]
	private void CheckAndSetTextureHandle(ref TextureHandle[][] handle, TextureHandle[][] newHandle)
	{
	}

	[Token(Token = "0x60005AC")]
	[Address(RVA = "0x2C41310", Offset = "0x2C3F910", VA = "0x182C41310", Slot = "4")]
	public override void Reset()
	{
	}

	[Token(Token = "0x60005AD")]
	[Address(RVA = "0x2C416F0", Offset = "0x2C3FCF0", VA = "0x182C416F0")]
	public Universal2DResourceData()
	{
	}
}
