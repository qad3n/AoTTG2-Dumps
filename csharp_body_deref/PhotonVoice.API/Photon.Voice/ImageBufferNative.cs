// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.ImageBufferNative
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/VoiceCodec.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x2000087")]
public class ImageBufferNative
{
	[Token(Token = "0x2000088")]
	public struct PlaneSet
	{
		[Token(Token = "0x400021C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private IntPtr plane0;

		[Token(Token = "0x400021D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private IntPtr plane1;

		[Token(Token = "0x400021E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private IntPtr plane2;

		[Token(Token = "0x400021F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private IntPtr plane3;

		[Token(Token = "0x170000CB")]
		public IntPtr this[int key]
		{
			[Token(Token = "0x60002E6")]
			[Address(RVA = "0x1D70530", Offset = "0x1D6EB30", VA = "0x181D70530")]
			get
			{
				return default(IntPtr);
			}
			[Token(Token = "0x60002E7")]
			[Address(RVA = "0x1D70560", Offset = "0x1D6EB60", VA = "0x181D70560")]
			set
			{
			}
		}

		[Token(Token = "0x170000CC")]
		public int Length
		{
			[Token(Token = "0x60002E8")]
			[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
			[CompilerGenerated]
			readonly get
			{
				return default(int);
			}
			[Token(Token = "0x60002E9")]
			[Address(RVA = "0xE4C6E0", Offset = "0xE4ACE0", VA = "0x180E4C6E0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x60002E5")]
		[Address(RVA = "0x1D70510", Offset = "0x1D6EB10", VA = "0x181D70510")]
		public PlaneSet(int length, [Optional] IntPtr p0, [Optional] IntPtr p1, [Optional] IntPtr p2, [Optional] IntPtr p3)
		{
		}
	}

	[Token(Token = "0x400021A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public ImageBufferInfo Info;

	[Token(Token = "0x400021B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public PlaneSet Planes;

	[Token(Token = "0x60002E1")]
	[Address(RVA = "0x1D6AE70", Offset = "0x1D69470", VA = "0x181D6AE70")]
	public ImageBufferNative(ImageBufferInfo info)
	{
	}

	[Token(Token = "0x60002E2")]
	[Address(RVA = "0x1D6AEE0", Offset = "0x1D694E0", VA = "0x181D6AEE0")]
	public ImageBufferNative(IntPtr buf, int width, int height, int stride, ImageFormat imageFormat)
	{
	}

	[Token(Token = "0x60002E3")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "4")]
	public virtual void Release()
	{
	}

	[Token(Token = "0x60002E4")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
	public virtual void Dispose()
	{
	}
}
