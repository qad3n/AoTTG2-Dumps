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

[Token(Token = "0x20000A8")]
public class TexturePacker_JsonArray
{
	[Serializable]
	[Token(Token = "0x20000A9")]
	public struct SpriteFrame
	{
		[Token(Token = "0x4000610")]
		[FieldOffset(Offset = "0x0")]
		public float x;

		[Token(Token = "0x4000611")]
		[FieldOffset(Offset = "0x4")]
		public float y;

		[Token(Token = "0x4000612")]
		[FieldOffset(Offset = "0x8")]
		public float w;

		[Token(Token = "0x4000613")]
		[FieldOffset(Offset = "0xC")]
		public float h;

		[Token(Token = "0x6000652")]
		[Address(RVA = "0x4C9E180", Offset = "0x4C9E180", VA = "0x4C9E180", Slot = "3")]
		public override string ToString()
		{
			return null;
		}
	}

	[Serializable]
	[Token(Token = "0x20000AA")]
	public struct SpriteSize
	{
		[Token(Token = "0x4000614")]
		[FieldOffset(Offset = "0x0")]
		public float w;

		[Token(Token = "0x4000615")]
		[FieldOffset(Offset = "0x4")]
		public float h;

		[Token(Token = "0x6000653")]
		[Address(RVA = "0x4C9E340", Offset = "0x4C9E340", VA = "0x4C9E340", Slot = "3")]
		public override string ToString()
		{
			return null;
		}
	}

	[Serializable]
	[Token(Token = "0x20000AB")]
	public struct Frame
	{
		[Token(Token = "0x4000616")]
		[FieldOffset(Offset = "0x0")]
		public string filename;

		[Token(Token = "0x4000617")]
		[FieldOffset(Offset = "0x8")]
		public SpriteFrame frame;

		[Token(Token = "0x4000618")]
		[FieldOffset(Offset = "0x18")]
		public bool rotated;

		[Token(Token = "0x4000619")]
		[FieldOffset(Offset = "0x19")]
		public bool trimmed;

		[Token(Token = "0x400061A")]
		[FieldOffset(Offset = "0x1C")]
		public SpriteFrame spriteSourceSize;

		[Token(Token = "0x400061B")]
		[FieldOffset(Offset = "0x2C")]
		public SpriteSize sourceSize;

		[Token(Token = "0x400061C")]
		[FieldOffset(Offset = "0x34")]
		public Vector2 pivot;
	}

	[Serializable]
	[Token(Token = "0x20000AC")]
	public struct Meta
	{
		[Token(Token = "0x400061D")]
		[FieldOffset(Offset = "0x0")]
		public string app;

		[Token(Token = "0x400061E")]
		[FieldOffset(Offset = "0x8")]
		public string version;

		[Token(Token = "0x400061F")]
		[FieldOffset(Offset = "0x10")]
		public string image;

		[Token(Token = "0x4000620")]
		[FieldOffset(Offset = "0x18")]
		public string format;

		[Token(Token = "0x4000621")]
		[FieldOffset(Offset = "0x20")]
		public SpriteSize size;

		[Token(Token = "0x4000622")]
		[FieldOffset(Offset = "0x28")]
		public float scale;

		[Token(Token = "0x4000623")]
		[FieldOffset(Offset = "0x30")]
		public string smartupdate;
	}

	[Serializable]
	[Token(Token = "0x20000AD")]
	public class SpriteDataObject
	{
		[Token(Token = "0x4000624")]
		[FieldOffset(Offset = "0x10")]
		public List<Frame> frames;

		[Token(Token = "0x4000625")]
		[FieldOffset(Offset = "0x18")]
		public Meta meta;

		[Token(Token = "0x6000654")]
		[Address(RVA = "0x4C9E3D0", Offset = "0x4C9E3D0", VA = "0x4C9E3D0")]
		public SpriteDataObject()
		{
		}
	}

	[Token(Token = "0x6000651")]
	[Address(RVA = "0x4C9E170", Offset = "0x4C9E170", VA = "0x4C9E170")]
	public TexturePacker_JsonArray()
	{
	}
}
