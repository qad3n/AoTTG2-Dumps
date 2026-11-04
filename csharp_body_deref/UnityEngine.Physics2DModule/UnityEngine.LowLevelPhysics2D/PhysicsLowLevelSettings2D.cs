// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.LowLevelPhysics2D.PhysicsLowLevelSettings2D
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.LowLevelPhysics2D;

[Serializable]
[Token(Token = "0x200000C")]
[UnityEngine.Scripting.RequiredByNativeCode]
public sealed class PhysicsLowLevelSettings2D : ScriptableObject
{
	[Token(Token = "0x400002E")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	[Header("Layers")]
	private PhysicsLayers.LayerNames m_PhysicsLayerNames;

	[Token(Token = "0x400002F")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private bool m_UseFullLayers;

	[Token(Token = "0x4000030")]
	[FieldOffset(Offset = "0x24")]
	[SerializeField]
	[Header("Default Definitions")]
	private PhysicsWorldDefinition m_PhysicsWorldDefinition;

	[Token(Token = "0x4000031")]
	[FieldOffset(Offset = "0x35C")]
	[SerializeField]
	private PhysicsBodyDefinition m_PhysicsBodyDefinition;

	[Token(Token = "0x4000032")]
	[FieldOffset(Offset = "0x3A0")]
	[SerializeField]
	private PhysicsShapeDefinition m_PhysicsShapeDefinition;

	[Token(Token = "0x4000033")]
	[FieldOffset(Offset = "0x3F0")]
	[SerializeField]
	private PhysicsChainDefinition m_PhysicsChainDefinition;

	[Token(Token = "0x4000034")]
	[FieldOffset(Offset = "0x430")]
	[SerializeField]
	private PhysicsDistanceJointDefinition m_PhysicsDistanceJointDefinition;

	[Token(Token = "0x4000035")]
	[FieldOffset(Offset = "0x4A8")]
	[SerializeField]
	private PhysicsFixedJointDefinition m_PhysicsFixedJointDefinition;

	[Token(Token = "0x4000036")]
	[FieldOffset(Offset = "0x500")]
	[SerializeField]
	private PhysicsHingeJointDefinition m_PhysicsHingeJointDefinition;

	[Token(Token = "0x4000037")]
	[FieldOffset(Offset = "0x570")]
	[SerializeField]
	private PhysicsRelativeJointDefinition m_PhysicsRelativeJointDefinition;

	[Token(Token = "0x4000038")]
	[FieldOffset(Offset = "0x5E4")]
	[SerializeField]
	private PhysicsSliderJointDefinition m_PhysicsSliderJointDefinition;

	[Token(Token = "0x4000039")]
	[FieldOffset(Offset = "0x654")]
	[SerializeField]
	private PhysicsWheelJointDefinition m_PhysicsWheelJointDefinition;

	[Token(Token = "0x400003A")]
	[FieldOffset(Offset = "0x6C0")]
	[Header("Globals")]
	[Range(1f, 64f)]
	[SerializeField]
	private int m_ConcurrentSimulations;

	[Token(Token = "0x400003B")]
	[FieldOffset(Offset = "0x6C4")]
	[Min(1E-05f)]
	[SerializeField]
	private float m_LengthUnitsPerMeter;

	[Token(Token = "0x400003C")]
	[FieldOffset(Offset = "0x6C8")]
	[SerializeField]
	private bool m_DrawInBuild;

	[Token(Token = "0x400003D")]
	[FieldOffset(Offset = "0x6C9")]
	[SerializeField]
	private bool m_BypassLowLevel;

	[Token(Token = "0x1700000B")]
	public PhysicsLayers.LayerNames physicsLayerNames
	{
		[Token(Token = "0x6000044")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000045")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public bool useFullLayers
	{
		[Token(Token = "0x6000046")]
		[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000047")]
		[Address(RVA = "0x138BAA0", Offset = "0x138A0A0", VA = "0x18138BAA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000D")]
	public PhysicsWorldDefinition physicsWorldDefinition
	{
		[Token(Token = "0x6000048")]
		[Address(RVA = "0x2FD4950", Offset = "0x2FD2F50", VA = "0x182FD4950")]
		get
		{
			return default(PhysicsWorldDefinition);
		}
		[Token(Token = "0x6000049")]
		[Address(RVA = "0x2FD4B00", Offset = "0x2FD3100", VA = "0x182FD4B00")]
		set
		{
		}
	}

	[Token(Token = "0x1700000E")]
	public PhysicsBodyDefinition physicsBodyDefinition
	{
		[Token(Token = "0x600004A")]
		[Address(RVA = "0x2FD48A0", Offset = "0x2FD2EA0", VA = "0x182FD48A0")]
		get
		{
			return default(PhysicsBodyDefinition);
		}
		[Token(Token = "0x600004B")]
		[Address(RVA = "0x2FD4A50", Offset = "0x2FD3050", VA = "0x182FD4A50")]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public PhysicsShapeDefinition physicsShapeDefinition
	{
		[Token(Token = "0x600004C")]
		[Address(RVA = "0x2FD4910", Offset = "0x2FD2F10", VA = "0x182FD4910")]
		get
		{
			return default(PhysicsShapeDefinition);
		}
		[Token(Token = "0x600004D")]
		[Address(RVA = "0x2FD4AC0", Offset = "0x2FD30C0", VA = "0x182FD4AC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public PhysicsChainDefinition physicsChainDefinition
	{
		[Token(Token = "0x600004E")]
		[Address(RVA = "0x2FD48E0", Offset = "0x2FD2EE0", VA = "0x182FD48E0")]
		get
		{
			return default(PhysicsChainDefinition);
		}
		[Token(Token = "0x600004F")]
		[Address(RVA = "0x2FD4A90", Offset = "0x2FD3090", VA = "0x182FD4A90")]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	[Range(1f, 64f)]
	public int concurrentSimulations
	{
		[Token(Token = "0x6000050")]
		[Address(RVA = "0x2FD3CB0", Offset = "0x2FD22B0", VA = "0x182FD3CB0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000051")]
		[Address(RVA = "0x2FD49F0", Offset = "0x2FD2FF0", VA = "0x182FD49F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000012")]
	public float lengthUnitsPerMeter
	{
		[Token(Token = "0x6000052")]
		[Address(RVA = "0x2FD3CD0", Offset = "0x2FD22D0", VA = "0x182FD3CD0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000053")]
		[Address(RVA = "0x2FD4A30", Offset = "0x2FD3030", VA = "0x182FD4A30")]
		set
		{
		}
	}

	[Token(Token = "0x17000013")]
	public bool drawInBuild
	{
		[Token(Token = "0x6000054")]
		[Address(RVA = "0x2FD3CC0", Offset = "0x2FD22C0", VA = "0x182FD3CC0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000055")]
		[Address(RVA = "0x2FD4A20", Offset = "0x2FD3020", VA = "0x182FD4A20")]
		set
		{
		}
	}

	[Token(Token = "0x17000014")]
	public bool bypassLowLevel
	{
		[Token(Token = "0x6000056")]
		[Address(RVA = "0x2FD3CA0", Offset = "0x2FD22A0", VA = "0x182FD3CA0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000057")]
		[Address(RVA = "0x2FD49E0", Offset = "0x2FD2FE0", VA = "0x182FD49E0")]
		set
		{
		}
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x2FD4880", Offset = "0x2FD2E80", VA = "0x182FD4880")]
	public PhysicsLowLevelSettings2D()
	{
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x2FD4150", Offset = "0x2FD2750", VA = "0x182FD4150")]
	private void Reset()
	{
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x2FD3E80", Offset = "0x2FD2480", VA = "0x182FD3E80")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void GetPhysicsLayerNames(out PhysicsLayers.LayerNames layerNames)
	{
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x2FD4030", Offset = "0x2FD2630", VA = "0x182FD4030")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void GetPhysicsWorldDefinition(out PhysicsWorldDefinition definition)
	{
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x2FD3CE0", Offset = "0x2FD22E0", VA = "0x182FD3CE0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void GetPhysicsBodyDefinition(out PhysicsBodyDefinition definition)
	{
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x2FD3F10", Offset = "0x2FD2510", VA = "0x182FD3F10")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void GetPhysicsShapeDefinition(out PhysicsShapeDefinition definition)
	{
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x2FD3D20", Offset = "0x2FD2320", VA = "0x182FD3D20")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void GetPhysicsChainDefinition(out PhysicsChainDefinition definition)
	{
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x2FD3D50", Offset = "0x2FD2350", VA = "0x182FD3D50")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void GetPhysicsDistanceJointDefinition(out PhysicsDistanceJointDefinition definition)
	{
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x2FD3DD0", Offset = "0x2FD23D0", VA = "0x182FD3DD0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void GetPhysicsFixedJointDefinition(out PhysicsFixedJointDefinition definition)
	{
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x2FD3E20", Offset = "0x2FD2420", VA = "0x182FD3E20")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void GetPhysicsHingeJointDefinition(out PhysicsHingeJointDefinition definition)
	{
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x2FD3EA0", Offset = "0x2FD24A0", VA = "0x182FD3EA0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void GetPhysicsRelativeJointDefinition(out PhysicsRelativeJointDefinition definition)
	{
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x2FD3F50", Offset = "0x2FD2550", VA = "0x182FD3F50")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void GetPhysicsSliderJointDefinition(out PhysicsSliderJointDefinition definition)
	{
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x2FD3FB0", Offset = "0x2FD25B0", VA = "0x182FD3FB0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void GetPhysicsWheelJointDefinition(out PhysicsWheelJointDefinition definition)
	{
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x2FD3CB0", Offset = "0x2FD22B0", VA = "0x182FD3CB0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private int GetConcurrentSimulations()
	{
		return default(int);
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x2FD3CD0", Offset = "0x2FD22D0", VA = "0x182FD3CD0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private float GetLengthUnitsPerMeter()
	{
		return default(float);
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x2FD3CC0", Offset = "0x2FD22C0", VA = "0x182FD3CC0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private bool GetDrawInBuild()
	{
		return default(bool);
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x2FD3CA0", Offset = "0x2FD22A0", VA = "0x182FD3CA0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private bool GetBypassLowLevel()
	{
		return default(bool);
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private bool GetUseFullLayers()
	{
		return default(bool);
	}
}
