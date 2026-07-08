using System;
using System.Collections.Generic;
using DG.Tweening.Plugins.Options;
using Il2CppDummyDll;

namespace DG.Tweening.Plugins.Core;

[Token(Token = "0x2000098")]
internal static class PluginsManager
{
	[Token(Token = "0x4000193")]
	[FieldOffset(Offset = "0x0")]
	private static ITweenPlugin _floatPlugin;

	[Token(Token = "0x4000194")]
	[FieldOffset(Offset = "0x8")]
	private static ITweenPlugin _doublePlugin;

	[Token(Token = "0x4000195")]
	[FieldOffset(Offset = "0x10")]
	private static ITweenPlugin _intPlugin;

	[Token(Token = "0x4000196")]
	[FieldOffset(Offset = "0x18")]
	private static ITweenPlugin _uintPlugin;

	[Token(Token = "0x4000197")]
	[FieldOffset(Offset = "0x20")]
	private static ITweenPlugin _longPlugin;

	[Token(Token = "0x4000198")]
	[FieldOffset(Offset = "0x28")]
	private static ITweenPlugin _ulongPlugin;

	[Token(Token = "0x4000199")]
	[FieldOffset(Offset = "0x30")]
	private static ITweenPlugin _vector2Plugin;

	[Token(Token = "0x400019A")]
	[FieldOffset(Offset = "0x38")]
	private static ITweenPlugin _vector3Plugin;

	[Token(Token = "0x400019B")]
	[FieldOffset(Offset = "0x40")]
	private static ITweenPlugin _vector4Plugin;

	[Token(Token = "0x400019C")]
	[FieldOffset(Offset = "0x48")]
	private static ITweenPlugin _quaternionPlugin;

	[Token(Token = "0x400019D")]
	[FieldOffset(Offset = "0x50")]
	private static ITweenPlugin _colorPlugin;

	[Token(Token = "0x400019E")]
	[FieldOffset(Offset = "0x58")]
	private static ITweenPlugin _rectPlugin;

	[Token(Token = "0x400019F")]
	[FieldOffset(Offset = "0x60")]
	private static ITweenPlugin _rectOffsetPlugin;

	[Token(Token = "0x40001A0")]
	[FieldOffset(Offset = "0x68")]
	private static ITweenPlugin _stringPlugin;

	[Token(Token = "0x40001A1")]
	[FieldOffset(Offset = "0x70")]
	private static ITweenPlugin _vector3ArrayPlugin;

	[Token(Token = "0x40001A2")]
	[FieldOffset(Offset = "0x78")]
	private static ITweenPlugin _color2Plugin;

	[Token(Token = "0x40001A3")]
	private const int _MaxCustomPlugins = 20;

	[Token(Token = "0x40001A4")]
	[FieldOffset(Offset = "0x80")]
	private static Dictionary<Type, ITweenPlugin> _customPlugins;

	[Token(Token = "0x600038C")]
	internal static ABSTweenPlugin<T1, T2, TPlugOptions> GetDefaultPlugin<T1, T2, TPlugOptions>() where TPlugOptions : struct, IPlugOptions
	{
		return null;
	}

	[Token(Token = "0x600038D")]
	public static ABSTweenPlugin<T1, T2, TPlugOptions> GetCustomPlugin<TPlugin, T1, T2, TPlugOptions>() where TPlugin : ITweenPlugin, new() where TPlugOptions : struct, IPlugOptions
	{
		return null;
	}

	[Token(Token = "0x600038E")]
	[Address(RVA = "0x2319400", Offset = "0x2319400", VA = "0x2319400")]
	internal static void PurgeAll()
	{
	}
}
