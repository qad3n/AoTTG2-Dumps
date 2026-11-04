// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderPipelineGlobalSettings
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20003BD")]
public abstract class RenderPipelineGlobalSettings : ScriptableObject, ISerializationCallbackReceiver
{
	[Token(Token = "0x17000387")]
	protected virtual List<IRenderPipelineGraphicsSettings> settingsList
	{
		[Token(Token = "0x6001689")]
		[Address(RVA = "0x2F69200", Offset = "0x2F67800", VA = "0x182F69200", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000388")]
	private Dictionary<Type, int> settingsMap
	{
		[Token(Token = "0x600168A")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600168B")]
	[Address(RVA = "0x2F68F40", Offset = "0x2F67540", VA = "0x182F68F40")]
	private void RecreateSettingsMap()
	{
	}

	[Token(Token = "0x600168C")]
	[Address(RVA = "0x2F69080", Offset = "0x2F67680", VA = "0x182F69080")]
	protected internal bool TryGet(Type type, out IRenderPipelineGraphicsSettings settings)
	{
		return default(bool);
	}

	[Token(Token = "0x600168D")]
	protected internal bool TryGetFirstSettingsImplementingInterface<TSettingsInterfaceType>(out TSettingsInterfaceType settings) where TSettingsInterfaceType : class, IRenderPipelineGraphicsSettings
	{
		return default(bool);
	}

	[Token(Token = "0x600168E")]
	protected internal bool GetSettingsImplementingInterface<TSettingsInterfaceType>(out List<TSettingsInterfaceType> settings) where TSettingsInterfaceType : class, IRenderPipelineGraphicsSettings
	{
		return default(bool);
	}

	[Token(Token = "0x600168F")]
	[Address(RVA = "0x2F68EC0", Offset = "0x2F674C0", VA = "0x182F68EC0")]
	protected internal bool Contains(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001690")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
	public virtual void OnBeforeSerialize()
	{
	}

	[Token(Token = "0x6001691")]
	[Address(RVA = "0x2F68F40", Offset = "0x2F67540", VA = "0x182F68F40", Slot = "8")]
	public virtual void OnAfterDeserialize()
	{
	}

	[Token(Token = "0x6001692")]
	[Address(RVA = "0x2F69180", Offset = "0x2F67780", VA = "0x182F69180")]
	protected RenderPipelineGlobalSettings()
	{
	}
}
