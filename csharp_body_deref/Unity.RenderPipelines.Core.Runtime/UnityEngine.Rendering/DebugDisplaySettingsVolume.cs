// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.DebugDisplaySettingsVolume
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000A3")]
public class DebugDisplaySettingsVolume : IDebugDisplaySettingsData, IDebugDisplaySettingsQuery
{
	[Token(Token = "0x20000A4")]
	private static class Styles
	{
		[Token(Token = "0x4000245")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly GUIContent none;

		[Token(Token = "0x4000246")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public static readonly GUIContent editorCamera;
	}

	[Token(Token = "0x20000A5")]
	private static class Strings
	{
		[Token(Token = "0x4000247")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly string none;

		[Token(Token = "0x4000248")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public static readonly string camera;

		[Token(Token = "0x4000249")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public static readonly string parameter;

		[Token(Token = "0x400024A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public static readonly string component;

		[Token(Token = "0x400024B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public static readonly string debugViewNotSupported;

		[Token(Token = "0x400024C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public static readonly string volumeInfo;

		[Token(Token = "0x400024D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public static readonly string interpolatedValue;

		[Token(Token = "0x400024E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public static readonly string defaultValue;

		[Token(Token = "0x400024F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public static readonly string global;

		[Token(Token = "0x4000250")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		public static readonly string local;
	}

	[Token(Token = "0x20000A6")]
	internal static class WidgetFactory
	{
		[Token(Token = "0x6000691")]
		[Address(RVA = "0x4B9B1C0", Offset = "0x4B9B1C0", VA = "0x4B9B1C0")]
		public static DebugUI.EnumField CreateComponentSelector(SettingsPanel panel, Action<DebugUI.Field<int>, int> refresh)
		{
			return null;
		}

		[Token(Token = "0x6000692")]
		[Address(RVA = "0x4B9B970", Offset = "0x4B9B970", VA = "0x4B9B970")]
		public static DebugUI.ObjectPopupField CreateCameraSelector(SettingsPanel panel, Action<DebugUI.Field<Object>, Object> refresh)
		{
			return null;
		}

		[Token(Token = "0x6000693")]
		[Address(RVA = "0x4B9BB90", Offset = "0x4B9BB90", VA = "0x4B9BB90")]
		private static DebugUI.Widget CreateVolumeParameterWidget(string name, VolumeParameter param, [Optional] Func<bool> isHiddenCallback)
		{
			return null;
		}

		[Token(Token = "0x6000694")]
		[Address(RVA = "0x4B9C720", Offset = "0x4B9C720", VA = "0x4B9C720")]
		public static DebugUI.Table CreateVolumeTable(DebugDisplaySettingsVolume data)
		{
			return null;
		}
	}

	[Token(Token = "0x20000B2")]
	[DisplayInfo(name = "Volume", order = int.MaxValue)]
	internal class SettingsPanel : DebugDisplaySettingsPanel<DebugDisplaySettingsVolume>
	{
		[Token(Token = "0x4000272")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private DebugUI.Table m_VolumeTable;

		[Token(Token = "0x60006BD")]
		[Address(RVA = "0x4B9AE00", Offset = "0x4B9AE00", VA = "0x4B9AE00")]
		public SettingsPanel(DebugDisplaySettingsVolume data)
		{
		}

		[Token(Token = "0x60006BE")]
		[Address(RVA = "0x4B9F920", Offset = "0x4B9F920", VA = "0x4B9F920")]
		private void Refresh()
		{
		}
	}

	[Token(Token = "0x4000244")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal int volumeComponentEnumIndex;

	[Token(Token = "0x1700007E")]
	public IVolumeDebugSettings2 volumeDebugSettings
	{
		[Token(Token = "0x600068B")]
		[Address(RVA = "0x4B9AD60", Offset = "0x4B9AD60", VA = "0x4B9AD60")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007F")]
	public bool AreAnySettingsActive
	{
		[Token(Token = "0x600068D")]
		[Address(RVA = "0x4B9ADA0", Offset = "0x4B9ADA0", VA = "0x4B9ADA0", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600068C")]
	[Address(RVA = "0x4B9AD70", Offset = "0x4B9AD70", VA = "0x4B9AD70")]
	public DebugDisplaySettingsVolume(IVolumeDebugSettings2 volumeDebugSettings)
	{
	}

	[Token(Token = "0x600068E")]
	[Address(RVA = "0x4B9ADB0", Offset = "0x4B9ADB0", VA = "0x4B9ADB0", Slot = "4")]
	public IDebugDisplaySettingsPanelDisposable CreatePanel()
	{
		return null;
	}
}
