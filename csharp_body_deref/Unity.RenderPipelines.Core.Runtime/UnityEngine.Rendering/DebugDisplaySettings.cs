// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.DebugDisplaySettings
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000068")]
public abstract class DebugDisplaySettings<T> : IDebugDisplaySettings where T : IDebugDisplaySettings, new()
{
	[Token(Token = "0x2000069")]
	private class IDebugDisplaySettingsDataComparer : IEqualityComparer<IDebugDisplaySettingsData>
	{
		[Token(Token = "0x6000587")]
		public bool Equals(IDebugDisplaySettingsData x, IDebugDisplaySettingsData y)
		{
			return default(bool);
		}

		[Token(Token = "0x6000588")]
		public int GetHashCode(IDebugDisplaySettingsData obj)
		{
			return default(int);
		}

		[Token(Token = "0x6000589")]
		public IDebugDisplaySettingsDataComparer()
		{
		}
	}

	[Token(Token = "0x400015B")]
	[FieldOffset(Offset = "0x0")]
	protected readonly HashSet<IDebugDisplaySettingsData> m_Settings;

	[Token(Token = "0x400015C")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Lazy<T> s_Instance;

	[Token(Token = "0x17000049")]
	public static T Instance
	{
		[Token(Token = "0x600057C")]
		get
		{
			return (T)null;
		}
	}

	[Token(Token = "0x1700004A")]
	public virtual bool AreAnySettingsActive
	{
		[Token(Token = "0x600057D")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700004B")]
	public virtual bool IsPostProcessingAllowed
	{
		[Token(Token = "0x600057E")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700004C")]
	public virtual bool IsLightingActive
	{
		[Token(Token = "0x600057F")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000580")]
	protected TData Add<TData>(TData newData) where TData : IDebugDisplaySettingsData
	{
		return (TData)null;
	}

	[Token(Token = "0x6000581")]
	private IDebugDisplaySettingsData UnityEngine_002ERendering_002EIDebugDisplaySettings_002EAdd(IDebugDisplaySettingsData newData)
	{
		return null;
	}

	[Token(Token = "0x6000582")]
	public void ForEach(Action<IDebugDisplaySettingsData> onExecute)
	{
	}

	[Token(Token = "0x6000583")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x6000584")]
	public virtual bool TryGetScreenClearColor(ref Color color)
	{
		return default(bool);
	}

	[Token(Token = "0x6000585")]
	protected DebugDisplaySettings()
	{
	}
}
