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

[Token(Token = "0x2000089")]
public class ImageBufferNative
{
	[Token(Token = "0x200008A")]
	public struct PlaneSet
	{
		[Token(Token = "0x4000221")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private IntPtr plane0;

		[Token(Token = "0x4000222")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private IntPtr plane1;

		[Token(Token = "0x4000223")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private IntPtr plane2;

		[Token(Token = "0x4000224")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private IntPtr plane3;

		[Token(Token = "0x170000CB")]
		public IntPtr this[int key]
		{
			[Token(Token = "0x60002E8")]
			[Address(RVA = "0x3F2FB10", Offset = "0x3F2FB10", VA = "0x3F2FB10")]
			get
			{
				return default(IntPtr);
			}
			[Token(Token = "0x60002E9")]
			[Address(RVA = "0x3F2FB50", Offset = "0x3F2FB50", VA = "0x3F2FB50")]
			set
			{
			}
		}

		[Token(Token = "0x170000CC")]
		public int Length
		{
			[Token(Token = "0x60002EA")]
			[Address(RVA = "0x3F2FB80", Offset = "0x3F2FB80", VA = "0x3F2FB80")]
			[CompilerGenerated]
			readonly get
			{
				return default(int);
			}
			[Token(Token = "0x60002EB")]
			[Address(RVA = "0x3F2FB90", Offset = "0x3F2FB90", VA = "0x3F2FB90")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x60002E7")]
		[Address(RVA = "0x3F2FA10", Offset = "0x3F2FA10", VA = "0x3F2FA10")]
		public PlaneSet(int length, [Optional] IntPtr p0, [Optional] IntPtr p1, [Optional] IntPtr p2, [Optional] IntPtr p3)
		{
		}
	}

	[Token(Token = "0x400021F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public ImageBufferInfo Info;

	[Token(Token = "0x4000220")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public PlaneSet Planes;

	[Token(Token = "0x60002E3")]
	[Address(RVA = "0x3F2F9C0", Offset = "0x3F2F9C0", VA = "0x3F2F9C0")]
	public ImageBufferNative(ImageBufferInfo info)
	{
	}

	[Token(Token = "0x60002E4")]
	[Address(RVA = "0x3F2FA30", Offset = "0x3F2FA30", VA = "0x3F2FA30")]
	public ImageBufferNative(IntPtr buf, int width, int height, int stride, ImageFormat imageFormat)
	{
	}

	[Token(Token = "0x60002E5")]
	[Address(RVA = "0x3F2FAF0", Offset = "0x3F2FAF0", VA = "0x3F2FAF0", Slot = "4")]
	public virtual void Release()
	{
	}

	[Token(Token = "0x60002E6")]
	[Address(RVA = "0x3F2FB00", Offset = "0x3F2FB00", VA = "0x3F2FB00", Slot = "5")]
	public virtual void Dispose()
	{
	}
}
