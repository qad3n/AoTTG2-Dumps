using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200009B")]
public abstract class DebugDisplaySettings<T> : IDebugDisplaySettings where T : IDebugDisplaySettings, new()
{
	[Token(Token = "0x4000237")]
	[FieldOffset(Offset = "0x0")]
	protected readonly HashSet<IDebugDisplaySettingsData> m_Settings;

	[Token(Token = "0x4000238")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Lazy<T> s_Instance;

	[Token(Token = "0x17000072")]
	public static T Instance
	{
		[Token(Token = "0x6000665")]
		get
		{
			return (T)null;
		}
	}

	[Token(Token = "0x17000073")]
	public virtual bool AreAnySettingsActive
	{
		[Token(Token = "0x6000666")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000074")]
	public virtual bool IsPostProcessingAllowed
	{
		[Token(Token = "0x6000667")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000075")]
	public virtual bool IsLightingActive
	{
		[Token(Token = "0x6000668")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000669")]
	protected TData Add<TData>(TData newData) where TData : IDebugDisplaySettingsData
	{
		return (TData)null;
	}

	[Token(Token = "0x600066A")]
	public void ForEach(Action<IDebugDisplaySettingsData> onExecute)
	{
	}

	[Token(Token = "0x600066B")]
	public virtual void Reset()
	{
	}

	[Token(Token = "0x600066C")]
	public virtual bool TryGetScreenClearColor(ref Color color)
	{
		return default(bool);
	}

	[Token(Token = "0x600066D")]
	protected DebugDisplaySettings()
	{
	}
}
