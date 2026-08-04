// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BackgroundRepeat
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x200000F")]
public struct BackgroundRepeat : IEquatable<BackgroundRepeat>
{
	[Token(Token = "0x2000010")]
	internal class PropertyBag : ContainerPropertyBag<BackgroundRepeat>
	{
		[Token(Token = "0x2000011")]
		private class XProperty : Property<BackgroundRepeat, Repeat>
		{
			[Token(Token = "0x4000021")]
			[FieldOffset(Offset = "0x20")]
			[CompilerGenerated]
			[DebuggerBrowsable(DebuggerBrowsableState.Never)]
			private readonly bool _003CIsReadOnly_003Ek__BackingField;

			[Token(Token = "0x1700000A")]
			public override string Name
			{
				[Token(Token = "0x6000045")]
				[Address(RVA = "0x4F0DB40", Offset = "0x4F0DB40", VA = "0x4F0DB40", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6000046")]
			[Address(RVA = "0x4F0DA80", Offset = "0x4F0DA80", VA = "0x4F0DA80")]
			public XProperty()
			{
			}
		}

		[Token(Token = "0x2000012")]
		private class YProperty : Property<BackgroundRepeat, Repeat>
		{
			[Token(Token = "0x4000023")]
			[FieldOffset(Offset = "0x20")]
			[CompilerGenerated]
			[DebuggerBrowsable(DebuggerBrowsableState.Never)]
			private readonly bool _003CIsReadOnly_003Ek__BackingField;

			[Token(Token = "0x1700000B")]
			public override string Name
			{
				[Token(Token = "0x6000047")]
				[Address(RVA = "0x4F0DB50", Offset = "0x4F0DB50", VA = "0x4F0DB50", Slot = "7")]
				[CompilerGenerated]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6000048")]
			[Address(RVA = "0x4F0DAE0", Offset = "0x4F0DAE0", VA = "0x4F0DAE0")]
			public YProperty()
			{
			}
		}

		[Token(Token = "0x6000044")]
		[Address(RVA = "0x4F0D900", Offset = "0x4F0D900", VA = "0x4F0D900")]
		public PropertyBag()
		{
		}
	}

	[Token(Token = "0x400001E")]
	[FieldOffset(Offset = "0x0")]
	public Repeat x;

	[Token(Token = "0x400001F")]
	[FieldOffset(Offset = "0x4")]
	public Repeat y;

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x4F0D110", Offset = "0x4F0D110", VA = "0x4F0D110")]
	public BackgroundRepeat(Repeat repeatX, Repeat repeatY)
	{
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x4F0D770", Offset = "0x4F0D770", VA = "0x4F0D770")]
	internal static BackgroundRepeat Initial()
	{
		return default(BackgroundRepeat);
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x4F0D780", Offset = "0x4F0D780", VA = "0x4F0D780", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x4F0D7F0", Offset = "0x4F0D7F0", VA = "0x4F0D7F0", Slot = "4")]
	public bool Equals(BackgroundRepeat other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x4F0D810", Offset = "0x4F0D810", VA = "0x4F0D810", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x4F0D6F0", Offset = "0x4F0D6F0", VA = "0x4F0D6F0")]
	public static bool operator ==(BackgroundRepeat style1, BackgroundRepeat style2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x4F0D850", Offset = "0x4F0D850", VA = "0x4F0D850")]
	public static bool operator !=(BackgroundRepeat style1, BackgroundRepeat style2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x4F0D870", Offset = "0x4F0D870", VA = "0x4F0D870", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
