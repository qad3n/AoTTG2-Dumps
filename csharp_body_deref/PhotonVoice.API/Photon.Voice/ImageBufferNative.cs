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
			[Address(RVA = "0x3C3A1C0", Offset = "0x3C3A1C0", VA = "0x3C3A1C0")]
			get
			{
				return default(IntPtr);
			}
			[Token(Token = "0x60002E9")]
			[Address(RVA = "0x3C3A200", Offset = "0x3C3A200", VA = "0x3C3A200")]
			set
			{
			}
		}

		[Token(Token = "0x170000CC")]
		public int Length
		{
			[Token(Token = "0x60002EA")]
			[Address(RVA = "0x3C3A230", Offset = "0x3C3A230", VA = "0x3C3A230")]
			[CompilerGenerated]
			readonly get
			{
				return default(int);
			}
			[Token(Token = "0x60002EB")]
			[Address(RVA = "0x3C3A240", Offset = "0x3C3A240", VA = "0x3C3A240")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x60002E7")]
		[Address(RVA = "0x3C3A0C0", Offset = "0x3C3A0C0", VA = "0x3C3A0C0")]
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
	[Address(RVA = "0x3C3A070", Offset = "0x3C3A070", VA = "0x3C3A070")]
	public ImageBufferNative(ImageBufferInfo info)
	{
	}

	[Token(Token = "0x60002E4")]
	[Address(RVA = "0x3C3A0E0", Offset = "0x3C3A0E0", VA = "0x3C3A0E0")]
	public ImageBufferNative(IntPtr buf, int width, int height, int stride, ImageFormat imageFormat)
	{
	}

	[Token(Token = "0x60002E5")]
	[Address(RVA = "0x3C3A1A0", Offset = "0x3C3A1A0", VA = "0x3C3A1A0", Slot = "4")]
	public virtual void Release()
	{
	}

	[Token(Token = "0x60002E6")]
	[Address(RVA = "0x3C3A1B0", Offset = "0x3C3A1B0", VA = "0x3C3A1B0", Slot = "5")]
	public virtual void Dispose()
	{
	}
}
