// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.SpriteAssetUtilities.TexturePacker_JsonArray
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace TMPro.SpriteAssetUtilities;

[Token(Token = "0x20000BA")]
public class TexturePacker_JsonArray
{
	[Serializable]
	[Token(Token = "0x20000BB")]
	public struct SpriteFrame
	{
		[Token(Token = "0x400069C")]
		[FieldOffset(Offset = "0x0")]
		public float x;

		[Token(Token = "0x400069D")]
		[FieldOffset(Offset = "0x4")]
		public float y;

		[Token(Token = "0x400069E")]
		[FieldOffset(Offset = "0x8")]
		public float w;

		[Token(Token = "0x400069F")]
		[FieldOffset(Offset = "0xC")]
		public float h;

		[Token(Token = "0x6000727")]
		[Address(RVA = "0x2D7E700", Offset = "0x2D7CD00", VA = "0x182D7E700", Slot = "3")]
		public override string ToString()
		{
			return null;
		}
	}

	[Serializable]
	[Token(Token = "0x20000BC")]
	public struct SpriteSize
	{
		[Token(Token = "0x40006A0")]
		[FieldOffset(Offset = "0x0")]
		public float w;

		[Token(Token = "0x40006A1")]
		[FieldOffset(Offset = "0x4")]
		public float h;

		[Token(Token = "0x6000728")]
		[Address(RVA = "0x2D7E8D0", Offset = "0x2D7CED0", VA = "0x182D7E8D0", Slot = "3")]
		public override string ToString()
		{
			return null;
		}
	}

	[Serializable]
	[Token(Token = "0x20000BD")]
	public struct Frame
	{
		[Token(Token = "0x40006A2")]
		[FieldOffset(Offset = "0x0")]
		public string filename;

		[Token(Token = "0x40006A3")]
		[FieldOffset(Offset = "0x8")]
		public SpriteFrame frame;

		[Token(Token = "0x40006A4")]
		[FieldOffset(Offset = "0x18")]
		public bool rotated;

		[Token(Token = "0x40006A5")]
		[FieldOffset(Offset = "0x19")]
		public bool trimmed;

		[Token(Token = "0x40006A6")]
		[FieldOffset(Offset = "0x1C")]
		public SpriteFrame spriteSourceSize;

		[Token(Token = "0x40006A7")]
		[FieldOffset(Offset = "0x2C")]
		public SpriteSize sourceSize;

		[Token(Token = "0x40006A8")]
		[FieldOffset(Offset = "0x34")]
		public Vector2 pivot;
	}

	[Serializable]
	[Token(Token = "0x20000BE")]
	public struct Meta
	{
		[Token(Token = "0x40006A9")]
		[FieldOffset(Offset = "0x0")]
		public string app;

		[Token(Token = "0x40006AA")]
		[FieldOffset(Offset = "0x8")]
		public string version;

		[Token(Token = "0x40006AB")]
		[FieldOffset(Offset = "0x10")]
		public string image;

		[Token(Token = "0x40006AC")]
		[FieldOffset(Offset = "0x18")]
		public string format;

		[Token(Token = "0x40006AD")]
		[FieldOffset(Offset = "0x20")]
		public SpriteSize size;

		[Token(Token = "0x40006AE")]
		[FieldOffset(Offset = "0x28")]
		public float scale;

		[Token(Token = "0x40006AF")]
		[FieldOffset(Offset = "0x30")]
		public string smartupdate;
	}

	[Serializable]
	[Token(Token = "0x20000BF")]
	public class SpriteDataObject
	{
		[Token(Token = "0x40006B0")]
		[FieldOffset(Offset = "0x10")]
		public List<Frame> frames;

		[Token(Token = "0x40006B1")]
		[FieldOffset(Offset = "0x18")]
		public Meta meta;

		[Token(Token = "0x6000729")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public SpriteDataObject()
		{
		}
	}

	[Token(Token = "0x6000726")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public TexturePacker_JsonArray()
	{
	}
}
