// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Material
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.ComponentModel;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Rendering;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x20000E4")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/Material.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/ShaderScriptBindings.h")]
public class Material : Object
{
	[Token(Token = "0x4000250")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly int k_ColorId;

	[Token(Token = "0x4000251")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	private static readonly int k_MainTexId;

	[Token(Token = "0x1700011C")]
	public Shader shader
	{
		[Token(Token = "0x6000617")]
		[Address(RVA = "0x2EE5E90", Offset = "0x2EE4490", VA = "0x182EE5E90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000618")]
		[Address(RVA = "0x2EE6790", Offset = "0x2EE4D90", VA = "0x182EE6790")]
		set
		{
		}
	}

	[Token(Token = "0x1700011D")]
	public Color color
	{
		[Token(Token = "0x6000619")]
		[Address(RVA = "0x2EE5710", Offset = "0x2EE3D10", VA = "0x182EE5710")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x600061A")]
		[Address(RVA = "0x2EE5F50", Offset = "0x2EE4550", VA = "0x182EE5F50")]
		set
		{
		}
	}

	[Token(Token = "0x1700011E")]
	public Texture mainTexture
	{
		[Token(Token = "0x600061B")]
		[Address(RVA = "0x2EE5B90", Offset = "0x2EE4190", VA = "0x182EE5B90")]
		get
		{
			return null;
		}
		[Token(Token = "0x600061C")]
		[Address(RVA = "0x2EE6530", Offset = "0x2EE4B30", VA = "0x182EE6530")]
		set
		{
		}
	}

	[Token(Token = "0x1700011F")]
	public Vector2 mainTextureOffset
	{
		[Token(Token = "0x600061D")]
		[Address(RVA = "0x2EE5990", Offset = "0x2EE3F90", VA = "0x182EE5990")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x600061E")]
		[Address(RVA = "0x2EE62D0", Offset = "0x2EE48D0", VA = "0x182EE62D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000120")]
	public Vector2 mainTextureScale
	{
		[Token(Token = "0x600061F")]
		[Address(RVA = "0x2EE5A90", Offset = "0x2EE4090", VA = "0x182EE5A90")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000620")]
		[Address(RVA = "0x2EE6400", Offset = "0x2EE4A00", VA = "0x182EE6400")]
		set
		{
		}
	}

	[Token(Token = "0x17000121")]
	public int renderQueue
	{
		[Token(Token = "0x6000626")]
		[Address(RVA = "0x2EE5DB0", Offset = "0x2EE43B0", VA = "0x182EE5DB0")]
		[UnityEngine.Bindings.NativeName("GetActualRenderQueue")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000627")]
		[Address(RVA = "0x2EE6690", Offset = "0x2EE4C90", VA = "0x182EE6690")]
		[UnityEngine.Bindings.NativeName("SetCustomRenderQueue")]
		set
		{
		}
	}

	[Token(Token = "0x17000122")]
	public LocalKeyword[] enabledKeywords
	{
		[Token(Token = "0x6000630")]
		[Address(RVA = "0x2EE34A0", Offset = "0x2EE1AA0", VA = "0x182EE34A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000123")]
	public MaterialGlobalIlluminationFlags globalIlluminationFlags
	{
		[Token(Token = "0x6000631")]
		[Address(RVA = "0x2EE6220", Offset = "0x2EE4820", VA = "0x182EE6220")]
		set
		{
		}
	}

	[Token(Token = "0x17000124")]
	[UnityEngine.Bindings.NativeProperty("EnableInstancingVariants")]
	public bool enableInstancing
	{
		[Token(Token = "0x6000632")]
		[Address(RVA = "0x2EE58F0", Offset = "0x2EE3EF0", VA = "0x182EE58F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000633")]
		[Address(RVA = "0x2EE6130", Offset = "0x2EE4730", VA = "0x182EE6130")]
		set
		{
		}
	}

	[Token(Token = "0x17000125")]
	public int passCount
	{
		[Token(Token = "0x6000634")]
		[Address(RVA = "0x2EE5CD0", Offset = "0x2EE42D0", VA = "0x182EE5CD0")]
		[UnityEngine.Bindings.NativeName("GetShader()->GetPassCount")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000126")]
	public string[] shaderKeywords
	{
		[Token(Token = "0x600063B")]
		[Address(RVA = "0x2EE2370", Offset = "0x2EE0970", VA = "0x182EE2370")]
		get
		{
			return null;
		}
		[Token(Token = "0x600063C")]
		[Address(RVA = "0x2EE47C0", Offset = "0x2EE2DC0", VA = "0x182EE47C0")]
		set
		{
		}
	}

	[Token(Token = "0x6000612")]
	[Address(RVA = "0x2EE1250", Offset = "0x2EDF850", VA = "0x182EE1250")]
	[UnityEngine.Bindings.FreeFunction("MaterialScripting::CreateWithShader")]
	private static void CreateWithShader([UnityEngine.Writable] Material self, [UnityEngine.Bindings.NotNull] Shader shader)
	{
	}

	[Token(Token = "0x6000613")]
	[Address(RVA = "0x2EE1130", Offset = "0x2EDF730", VA = "0x182EE1130")]
	[UnityEngine.Bindings.FreeFunction("MaterialScripting::CreateWithMaterial")]
	private static void CreateWithMaterial([UnityEngine.Writable] Material self, [UnityEngine.Bindings.NotNull] Material source)
	{
	}

	[Token(Token = "0x6000614")]
	[Address(RVA = "0x2EE5460", Offset = "0x2EE3A60", VA = "0x182EE5460")]
	public Material(Shader shader)
	{
	}

	[Token(Token = "0x6000615")]
	[Address(RVA = "0x2EE55E0", Offset = "0x2EE3BE0", VA = "0x182EE55E0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public Material(Material source)
	{
	}

	[Token(Token = "0x6000616")]
	[Address(RVA = "0x2EE5590", Offset = "0x2EE3B90", VA = "0x182EE5590")]
	[Obsolete("Creating materials from shader source string is no longer supported. Use Shader assets instead.", true)]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public Material(string contents)
	{
	}

	[Token(Token = "0x6000621")]
	[Address(RVA = "0x2EE2010", Offset = "0x2EE0610", VA = "0x182EE2010")]
	[UnityEngine.Bindings.NativeName("GetFirstPropertyNameIdByAttributeFromScript")]
	private int GetFirstPropertyNameIdByAttribute(ShaderPropertyFlags attributeFlag)
	{
		return default(int);
	}

	[Token(Token = "0x6000622")]
	[Address(RVA = "0x2EE2B50", Offset = "0x2EE1150", VA = "0x182EE2B50")]
	[UnityEngine.Bindings.NativeName("HasPropertyFromScript")]
	public bool HasProperty(int nameID)
	{
		return default(bool);
	}

	[Token(Token = "0x6000623")]
	[Address(RVA = "0x2EE2C00", Offset = "0x2EE1200", VA = "0x182EE2C00")]
	public bool HasProperty(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000624")]
	[Address(RVA = "0x2EE2A60", Offset = "0x2EE1060", VA = "0x182EE2A60")]
	[UnityEngine.Bindings.NativeName("HasFloatFromScript")]
	private bool HasFloatImpl(int name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000625")]
	[Address(RVA = "0x2EE2A60", Offset = "0x2EE1060", VA = "0x182EE2A60")]
	public bool HasFloat(int nameID)
	{
		return default(bool);
	}

	[Token(Token = "0x6000628")]
	[Address(RVA = "0x2EE17F0", Offset = "0x2EDFDF0", VA = "0x182EE17F0")]
	public void EnableKeyword(string keyword)
	{
	}

	[Token(Token = "0x6000629")]
	[Address(RVA = "0x2EE1420", Offset = "0x2EDFA20", VA = "0x182EE1420")]
	public void DisableKeyword(string keyword)
	{
	}

	[Token(Token = "0x600062A")]
	[Address(RVA = "0x2EE2D10", Offset = "0x2EE1310", VA = "0x182EE2D10")]
	public bool IsKeywordEnabled(string keyword)
	{
		return default(bool);
	}

	[Token(Token = "0x600062B")]
	[Address(RVA = "0x2EE1A10", Offset = "0x2EE0010", VA = "0x182EE1A10")]
	[UnityEngine.Bindings.FreeFunction("MaterialScripting::EnableKeyword", HasExplicitThis = true)]
	private void EnableLocalKeyword(LocalKeyword keyword)
	{
	}

	[Token(Token = "0x600062C")]
	[Address(RVA = "0x2EE1640", Offset = "0x2EDFC40", VA = "0x182EE1640")]
	[UnityEngine.Bindings.FreeFunction("MaterialScripting::DisableKeyword", HasExplicitThis = true)]
	private void DisableLocalKeyword(LocalKeyword keyword)
	{
	}

	[Token(Token = "0x600062D")]
	[Address(RVA = "0x2EE1740", Offset = "0x2EDFD40", VA = "0x182EE1740")]
	public void EnableKeyword(in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x600062E")]
	[Address(RVA = "0x2EE1370", Offset = "0x2EDF970", VA = "0x182EE1370")]
	public void DisableKeyword(in LocalKeyword keyword)
	{
	}

	[Token(Token = "0x600062F")]
	[Address(RVA = "0x2EE34A0", Offset = "0x2EE1AA0", VA = "0x182EE34A0")]
	[UnityEngine.Bindings.FreeFunction("MaterialScripting::SetEnabledKeywords", HasExplicitThis = true)]
	private void SetEnabledKeywords(LocalKeyword[] keywords)
	{
	}

	[Token(Token = "0x6000635")]
	[Address(RVA = "0x2EE1B10", Offset = "0x2EE0110", VA = "0x182EE1B10")]
	public int FindPass(string passName)
	{
		return default(int);
	}

	[Token(Token = "0x6000636")]
	[Address(RVA = "0x2EE4380", Offset = "0x2EE2980", VA = "0x182EE4380")]
	public void SetOverrideTag(string tag, string val)
	{
	}

	[Token(Token = "0x6000637")]
	[Address(RVA = "0x2EE46C0", Offset = "0x2EE2CC0", VA = "0x182EE46C0")]
	[UnityEngine.Bindings.FreeFunction("MaterialScripting::SetPass", HasExplicitThis = true)]
	public bool SetPass(int pass)
	{
		return default(bool);
	}

	[Token(Token = "0x6000638")]
	[Address(RVA = "0x2EE1000", Offset = "0x2EDF600", VA = "0x182EE1000")]
	[UnityEngine.Bindings.FreeFunction("MaterialScripting::CopyPropertiesFrom", HasExplicitThis = true)]
	public void CopyPropertiesFromMaterial(Material mat)
	{
	}

	[Token(Token = "0x6000639")]
	[Address(RVA = "0x2EE2370", Offset = "0x2EE0970", VA = "0x182EE2370")]
	[UnityEngine.Bindings.FreeFunction("MaterialScripting::GetShaderKeywords", HasExplicitThis = true)]
	private string[] GetShaderKeywords()
	{
		return null;
	}

	[Token(Token = "0x600063A")]
	[Address(RVA = "0x2EE47C0", Offset = "0x2EE2DC0", VA = "0x182EE47C0")]
	[UnityEngine.Bindings.FreeFunction("MaterialScripting::SetShaderKeywords", HasExplicitThis = true)]
	private void SetShaderKeywords(string[] names)
	{
	}

	[Token(Token = "0x600063D")]
	[Address(RVA = "0x2EE0F10", Offset = "0x2EDF510", VA = "0x182EE0F10")]
	public int ComputeCRC()
	{
		return default(int);
	}

	[Token(Token = "0x600063E")]
	[Address(RVA = "0x2EE3BB0", Offset = "0x2EE21B0", VA = "0x182EE3BB0")]
	[UnityEngine.Bindings.NativeName("SetIntFromScript")]
	private void SetIntImpl(int name, int value)
	{
	}

	[Token(Token = "0x600063F")]
	[Address(RVA = "0x2EE3980", Offset = "0x2EE1F80", VA = "0x182EE3980")]
	[UnityEngine.Bindings.NativeName("SetFloatFromScript")]
	private void SetFloatImpl(int name, float value)
	{
	}

	[Token(Token = "0x6000640")]
	[Address(RVA = "0x2EE30F0", Offset = "0x2EE16F0", VA = "0x182EE30F0")]
	[UnityEngine.Bindings.NativeName("SetColorFromScript")]
	private void SetColorImpl(int name, Color value)
	{
	}

	[Token(Token = "0x6000641")]
	[Address(RVA = "0x2EE4180", Offset = "0x2EE2780", VA = "0x182EE4180")]
	[UnityEngine.Bindings.NativeName("SetMatrixFromScript")]
	private void SetMatrixImpl(int name, Matrix4x4 value)
	{
	}

	[Token(Token = "0x6000642")]
	[Address(RVA = "0x2EE48C0", Offset = "0x2EE2EC0", VA = "0x182EE48C0")]
	[UnityEngine.Bindings.NativeName("SetTextureFromScript")]
	private void SetTextureImpl(int name, Texture value)
	{
	}

	[Token(Token = "0x6000643")]
	[Address(RVA = "0x2EE2F00", Offset = "0x2EE1500", VA = "0x182EE2F00")]
	[UnityEngine.Bindings.NativeName("SetBufferFromScript")]
	private void SetGraphicsBufferImpl(int name, GraphicsBuffer value)
	{
	}

	[Token(Token = "0x6000644")]
	[Address(RVA = "0x2EE3390", Offset = "0x2EE1990", VA = "0x182EE3390")]
	[UnityEngine.Bindings.NativeName("SetConstantBufferFromScript")]
	private void SetConstantBufferImpl(int name, ComputeBuffer value, int offset, int size)
	{
	}

	[Token(Token = "0x6000645")]
	[Address(RVA = "0x2EE2100", Offset = "0x2EE0700", VA = "0x182EE2100")]
	[UnityEngine.Bindings.NativeName("GetFloatFromScript")]
	private float GetFloatImpl(int name)
	{
		return default(float);
	}

	[Token(Token = "0x6000646")]
	[Address(RVA = "0x2EE1D50", Offset = "0x2EE0350", VA = "0x182EE1D50")]
	[UnityEngine.Bindings.NativeName("GetColorFromScript")]
	private Color GetColorImpl(int name)
	{
		return default(Color);
	}

	[Token(Token = "0x6000647")]
	[Address(RVA = "0x2EE2450", Offset = "0x2EE0A50", VA = "0x182EE2450")]
	[UnityEngine.Bindings.NativeName("GetTextureFromScript")]
	private Texture GetTextureImpl(int name)
	{
		return null;
	}

	[Token(Token = "0x6000648")]
	[Address(RVA = "0x2EE35A0", Offset = "0x2EE1BA0", VA = "0x182EE35A0")]
	[UnityEngine.Bindings.FreeFunction(Name = "MaterialScripting::SetFloatArray", HasExplicitThis = true)]
	private void SetFloatArrayImpl(int name, float[] values, int count)
	{
	}

	[Token(Token = "0x6000649")]
	[Address(RVA = "0x2EE5000", Offset = "0x2EE3600", VA = "0x182EE5000")]
	[UnityEngine.Bindings.FreeFunction(Name = "MaterialScripting::SetVectorArray", HasExplicitThis = true)]
	private void SetVectorArrayImpl(int name, Vector4[] values, int count)
	{
	}

	[Token(Token = "0x600064A")]
	[Address(RVA = "0x2EE3DA0", Offset = "0x2EE23A0", VA = "0x182EE3DA0")]
	[UnityEngine.Bindings.FreeFunction(Name = "MaterialScripting::SetMatrixArray", HasExplicitThis = true)]
	private void SetMatrixArrayImpl(int name, Matrix4x4[] values, int count)
	{
	}

	[Token(Token = "0x600064B")]
	[Address(RVA = "0x2EE2660", Offset = "0x2EE0C60", VA = "0x182EE2660")]
	[UnityEngine.Bindings.NativeName("GetTextureScaleAndOffsetFromScript")]
	private Vector4 GetTextureScaleAndOffsetImpl(int name)
	{
		return default(Vector4);
	}

	[Token(Token = "0x600064C")]
	[Address(RVA = "0x2EE4A00", Offset = "0x2EE3000", VA = "0x182EE4A00")]
	[UnityEngine.Bindings.NativeName("SetTextureOffsetFromScript")]
	private void SetTextureOffsetImpl(int name, Vector2 offset)
	{
	}

	[Token(Token = "0x600064D")]
	[Address(RVA = "0x2EE4C80", Offset = "0x2EE3280", VA = "0x182EE4C80")]
	[UnityEngine.Bindings.NativeName("SetTextureScaleFromScript")]
	private void SetTextureScaleImpl(int name, Vector2 scale)
	{
	}

	[Token(Token = "0x600064E")]
	[Address(RVA = "0x2EE3710", Offset = "0x2EE1D10", VA = "0x182EE3710")]
	private void SetFloatArray(int name, float[] values, int count)
	{
	}

	[Token(Token = "0x600064F")]
	[Address(RVA = "0x2EE5140", Offset = "0x2EE3740", VA = "0x182EE5140")]
	private void SetVectorArray(int name, Vector4[] values, int count)
	{
	}

	[Token(Token = "0x6000650")]
	[Address(RVA = "0x2EE3EE0", Offset = "0x2EE24E0", VA = "0x182EE3EE0")]
	private void SetMatrixArray(int name, Matrix4x4[] values, int count)
	{
	}

	[Token(Token = "0x6000651")]
	[Address(RVA = "0x2EE3C70", Offset = "0x2EE2270", VA = "0x182EE3C70")]
	public void SetInt(string name, int value)
	{
	}

	[Token(Token = "0x6000652")]
	[Address(RVA = "0x2EE3A40", Offset = "0x2EE2040", VA = "0x182EE3A40")]
	public void SetFloat(string name, float value)
	{
	}

	[Token(Token = "0x6000653")]
	[Address(RVA = "0x2EE3980", Offset = "0x2EE1F80", VA = "0x182EE3980")]
	public void SetFloat(int nameID, float value)
	{
	}

	[Token(Token = "0x6000654")]
	[Address(RVA = "0x2EE3BB0", Offset = "0x2EE21B0", VA = "0x182EE3BB0")]
	public void SetInteger(int nameID, int value)
	{
	}

	[Token(Token = "0x6000655")]
	[Address(RVA = "0x2EE3270", Offset = "0x2EE1870", VA = "0x182EE3270")]
	public void SetColor(string name, Color value)
	{
	}

	[Token(Token = "0x6000656")]
	[Address(RVA = "0x2EE31B0", Offset = "0x2EE17B0", VA = "0x182EE31B0")]
	public void SetColor(int nameID, Color value)
	{
	}

	[Token(Token = "0x6000657")]
	[Address(RVA = "0x2EE3270", Offset = "0x2EE1870", VA = "0x182EE3270")]
	public void SetVector(string name, Vector4 value)
	{
	}

	[Token(Token = "0x6000658")]
	[Address(RVA = "0x2EE31B0", Offset = "0x2EE17B0", VA = "0x182EE31B0")]
	public void SetVector(int nameID, Vector4 value)
	{
	}

	[Token(Token = "0x6000659")]
	[Address(RVA = "0x2EE4240", Offset = "0x2EE2840", VA = "0x182EE4240")]
	public void SetMatrix(int nameID, Matrix4x4 value)
	{
	}

	[Token(Token = "0x600065A")]
	[Address(RVA = "0x2EE4EB0", Offset = "0x2EE34B0", VA = "0x182EE4EB0")]
	public void SetTexture(string name, Texture value)
	{
	}

	[Token(Token = "0x600065B")]
	[Address(RVA = "0x2EE48C0", Offset = "0x2EE2EC0", VA = "0x182EE48C0")]
	public void SetTexture(int nameID, Texture value)
	{
	}

	[Token(Token = "0x600065C")]
	[Address(RVA = "0x2EE2FD0", Offset = "0x2EE15D0", VA = "0x182EE2FD0")]
	public void SetBuffer(string name, GraphicsBuffer value)
	{
	}

	[Token(Token = "0x600065D")]
	[Address(RVA = "0x2EE2F00", Offset = "0x2EE1500", VA = "0x182EE2F00")]
	public void SetBuffer(int nameID, GraphicsBuffer value)
	{
	}

	[Token(Token = "0x600065E")]
	[Address(RVA = "0x2EE3390", Offset = "0x2EE1990", VA = "0x182EE3390")]
	public void SetConstantBuffer(int nameID, ComputeBuffer value, int offset, int size)
	{
	}

	[Token(Token = "0x600065F")]
	[Address(RVA = "0x2EE36E0", Offset = "0x2EE1CE0", VA = "0x182EE36E0")]
	public void SetFloatArray(int nameID, float[] values)
	{
	}

	[Token(Token = "0x6000660")]
	[Address(RVA = "0x2EE5390", Offset = "0x2EE3990", VA = "0x182EE5390")]
	public void SetVectorArray(string name, Vector4[] values)
	{
	}

	[Token(Token = "0x6000661")]
	[Address(RVA = "0x2EE5360", Offset = "0x2EE3960", VA = "0x182EE5360")]
	public void SetVectorArray(int nameID, Vector4[] values)
	{
	}

	[Token(Token = "0x6000662")]
	[Address(RVA = "0x2EE4100", Offset = "0x2EE2700", VA = "0x182EE4100")]
	public void SetMatrixArray(int nameID, Matrix4x4[] values)
	{
	}

	[Token(Token = "0x6000663")]
	[Address(RVA = "0x2EE2270", Offset = "0x2EE0870", VA = "0x182EE2270")]
	public int GetInt(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6000664")]
	[Address(RVA = "0x2EE21B0", Offset = "0x2EE07B0", VA = "0x182EE21B0")]
	public float GetFloat(string name)
	{
		return default(float);
	}

	[Token(Token = "0x6000665")]
	[Address(RVA = "0x2EE2100", Offset = "0x2EE0700", VA = "0x182EE2100")]
	public float GetFloat(int nameID)
	{
		return default(float);
	}

	[Token(Token = "0x6000666")]
	[Address(RVA = "0x2EE1E10", Offset = "0x2EE0410", VA = "0x182EE1E10")]
	public Color GetColor(string name)
	{
		return default(Color);
	}

	[Token(Token = "0x6000667")]
	[Address(RVA = "0x2EE1EF0", Offset = "0x2EE04F0", VA = "0x182EE1EF0")]
	public Color GetColor(int nameID)
	{
		return default(Color);
	}

	[Token(Token = "0x6000668")]
	[Address(RVA = "0x2EE2860", Offset = "0x2EE0E60", VA = "0x182EE2860")]
	public Vector4 GetVector(string name)
	{
		return default(Vector4);
	}

	[Token(Token = "0x6000669")]
	[Address(RVA = "0x2EE2940", Offset = "0x2EE0F40", VA = "0x182EE2940")]
	public Vector4 GetVector(int nameID)
	{
		return default(Vector4);
	}

	[Token(Token = "0x600066A")]
	[Address(RVA = "0x2EE2820", Offset = "0x2EE0E20", VA = "0x182EE2820")]
	public Texture GetTexture(string name)
	{
		return null;
	}

	[Token(Token = "0x600066B")]
	[Address(RVA = "0x2EE2850", Offset = "0x2EE0E50", VA = "0x182EE2850")]
	public Texture GetTexture(int nameID)
	{
		return null;
	}

	[Token(Token = "0x600066C")]
	[Address(RVA = "0x2EE4AB0", Offset = "0x2EE30B0", VA = "0x182EE4AB0")]
	public void SetTextureOffset(string name, Vector2 value)
	{
	}

	[Token(Token = "0x600066D")]
	[Address(RVA = "0x2EE4B80", Offset = "0x2EE3180", VA = "0x182EE4B80")]
	public void SetTextureOffset(int nameID, Vector2 value)
	{
	}

	[Token(Token = "0x600066E")]
	[Address(RVA = "0x2EE4D30", Offset = "0x2EE3330", VA = "0x182EE4D30")]
	public void SetTextureScale(string name, Vector2 value)
	{
	}

	[Token(Token = "0x600066F")]
	[Address(RVA = "0x2EE4E00", Offset = "0x2EE3400", VA = "0x182EE4E00")]
	public void SetTextureScale(int nameID, Vector2 value)
	{
	}

	[Token(Token = "0x6000670")]
	[Address(RVA = "0x2EE25E0", Offset = "0x2EE0BE0", VA = "0x182EE25E0")]
	public Vector2 GetTextureOffset(string name)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000671")]
	[Address(RVA = "0x2EE2510", Offset = "0x2EE0B10", VA = "0x182EE2510")]
	public Vector2 GetTextureOffset(int nameID)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000672")]
	[Address(RVA = "0x2EE27F0", Offset = "0x2EE0DF0", VA = "0x182EE27F0")]
	public Vector2 GetTextureScale(string name)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000673")]
	[Address(RVA = "0x2EE2720", Offset = "0x2EE0D20", VA = "0x182EE2720")]
	public Vector2 GetTextureScale(int nameID)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000675")]
	[Address(RVA = "0x2EE1200", Offset = "0x2EDF800", VA = "0x182EE1200")]
	private static extern void CreateWithShader_Injected([UnityEngine.Writable] Material self, IntPtr shader);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000676")]
	[Address(RVA = "0x2EE10E0", Offset = "0x2EDF6E0", VA = "0x182EE10E0")]
	private static extern void CreateWithMaterial_Injected([UnityEngine.Writable] Material self, IntPtr source);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000677")]
	[Address(RVA = "0x2EE5E50", Offset = "0x2EE4450", VA = "0x182EE5E50")]
	private static extern IntPtr get_shader_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000678")]
	[Address(RVA = "0x2EE6740", Offset = "0x2EE4D40", VA = "0x182EE6740")]
	private static extern void set_shader_Injected(IntPtr _unity_self, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000679")]
	[Address(RVA = "0x2EE1FD0", Offset = "0x2EE05D0", VA = "0x182EE1FD0")]
	private static extern int GetFirstPropertyNameIdByAttribute_Injected(IntPtr _unity_self, ShaderPropertyFlags attributeFlag);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600067A")]
	[Address(RVA = "0x2EE2B10", Offset = "0x2EE1110", VA = "0x182EE2B10")]
	private static extern bool HasProperty_Injected(IntPtr _unity_self, int nameID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600067B")]
	[Address(RVA = "0x2EE2A20", Offset = "0x2EE1020", VA = "0x182EE2A20")]
	private static extern bool HasFloatImpl_Injected(IntPtr _unity_self, int name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600067C")]
	[Address(RVA = "0x2EE5D70", Offset = "0x2EE4370", VA = "0x182EE5D70")]
	private static extern int get_renderQueue_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600067D")]
	[Address(RVA = "0x2EE6650", Offset = "0x2EE4C50", VA = "0x182EE6650")]
	private static extern void set_renderQueue_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600067E")]
	[Address(RVA = "0x2EE16F0", Offset = "0x2EDFCF0", VA = "0x182EE16F0")]
	private static extern void EnableKeyword_Injected(IntPtr _unity_self, ref ManagedSpanWrapper keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600067F")]
	[Address(RVA = "0x2EE1320", Offset = "0x2EDF920", VA = "0x182EE1320")]
	private static extern void DisableKeyword_Injected(IntPtr _unity_self, ref ManagedSpanWrapper keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000680")]
	[Address(RVA = "0x2EE2CC0", Offset = "0x2EE12C0", VA = "0x182EE2CC0")]
	private static extern bool IsKeywordEnabled_Injected(IntPtr _unity_self, ref ManagedSpanWrapper keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000681")]
	[Address(RVA = "0x2EE19C0", Offset = "0x2EDFFC0", VA = "0x182EE19C0")]
	private static extern void EnableLocalKeyword_Injected(IntPtr _unity_self, [In] ref LocalKeyword keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000682")]
	[Address(RVA = "0x2EE15F0", Offset = "0x2EDFBF0", VA = "0x182EE15F0")]
	private static extern void DisableLocalKeyword_Injected(IntPtr _unity_self, [In] ref LocalKeyword keyword);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000683")]
	[Address(RVA = "0x2EE3450", Offset = "0x2EE1A50", VA = "0x182EE3450")]
	private static extern void SetEnabledKeywords_Injected(IntPtr _unity_self, LocalKeyword[] keywords);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000684")]
	[Address(RVA = "0x2EE61E0", Offset = "0x2EE47E0", VA = "0x182EE61E0")]
	private static extern void set_globalIlluminationFlags_Injected(IntPtr _unity_self, MaterialGlobalIlluminationFlags value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000685")]
	[Address(RVA = "0x2EE58B0", Offset = "0x2EE3EB0", VA = "0x182EE58B0")]
	private static extern bool get_enableInstancing_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000686")]
	[Address(RVA = "0x2EE60E0", Offset = "0x2EE46E0", VA = "0x182EE60E0")]
	private static extern void set_enableInstancing_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000687")]
	[Address(RVA = "0x2EE5C90", Offset = "0x2EE4290", VA = "0x182EE5C90")]
	private static extern int get_passCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000688")]
	[Address(RVA = "0x2EE1AC0", Offset = "0x2EE00C0", VA = "0x182EE1AC0")]
	private static extern int FindPass_Injected(IntPtr _unity_self, ref ManagedSpanWrapper passName);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000689")]
	[Address(RVA = "0x2EE4320", Offset = "0x2EE2920", VA = "0x182EE4320")]
	private static extern void SetOverrideTag_Injected(IntPtr _unity_self, ref ManagedSpanWrapper tag, ref ManagedSpanWrapper val);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600068A")]
	[Address(RVA = "0x2EE4680", Offset = "0x2EE2C80", VA = "0x182EE4680")]
	private static extern bool SetPass_Injected(IntPtr _unity_self, int pass);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600068B")]
	[Address(RVA = "0x2EE0FB0", Offset = "0x2EDF5B0", VA = "0x182EE0FB0")]
	private static extern void CopyPropertiesFromMaterial_Injected(IntPtr _unity_self, IntPtr mat);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600068C")]
	[Address(RVA = "0x2EE2330", Offset = "0x2EE0930", VA = "0x182EE2330")]
	private static extern string[] GetShaderKeywords_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600068D")]
	[Address(RVA = "0x2EE4770", Offset = "0x2EE2D70", VA = "0x182EE4770")]
	private static extern void SetShaderKeywords_Injected(IntPtr _unity_self, string[] names);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600068E")]
	[Address(RVA = "0x2EE0ED0", Offset = "0x2EDF4D0", VA = "0x182EE0ED0")]
	private static extern int ComputeCRC_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600068F")]
	[Address(RVA = "0x2EE3B60", Offset = "0x2EE2160", VA = "0x182EE3B60")]
	private static extern void SetIntImpl_Injected(IntPtr _unity_self, int name, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000690")]
	[Address(RVA = "0x2EE3930", Offset = "0x2EE1F30", VA = "0x182EE3930")]
	private static extern void SetFloatImpl_Injected(IntPtr _unity_self, int name, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000691")]
	[Address(RVA = "0x2EE30A0", Offset = "0x2EE16A0", VA = "0x182EE30A0")]
	private static extern void SetColorImpl_Injected(IntPtr _unity_self, int name, [In] ref Color value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000692")]
	[Address(RVA = "0x2EE4130", Offset = "0x2EE2730", VA = "0x182EE4130")]
	private static extern void SetMatrixImpl_Injected(IntPtr _unity_self, int name, [In] ref Matrix4x4 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000693")]
	[Address(RVA = "0x2EE4870", Offset = "0x2EE2E70", VA = "0x182EE4870")]
	private static extern void SetTextureImpl_Injected(IntPtr _unity_self, int name, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000694")]
	[Address(RVA = "0x2EE3B10", Offset = "0x2EE2110", VA = "0x182EE3B10")]
	private static extern void SetGraphicsBufferImpl_Injected(IntPtr _unity_self, int name, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000695")]
	[Address(RVA = "0x2EE3340", Offset = "0x2EE1940", VA = "0x182EE3340")]
	private static extern void SetConstantBufferImpl_Injected(IntPtr _unity_self, int name, IntPtr value, int offset, int size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000696")]
	[Address(RVA = "0x2EE20C0", Offset = "0x2EE06C0", VA = "0x182EE20C0")]
	private static extern float GetFloatImpl_Injected(IntPtr _unity_self, int name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000697")]
	[Address(RVA = "0x2EE1D00", Offset = "0x2EE0300", VA = "0x182EE1D00")]
	private static extern void GetColorImpl_Injected(IntPtr _unity_self, int name, out Color ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000698")]
	[Address(RVA = "0x2EE2410", Offset = "0x2EE0A10", VA = "0x182EE2410")]
	private static extern IntPtr GetTextureImpl_Injected(IntPtr _unity_self, int name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000699")]
	[Address(RVA = "0x2EE3550", Offset = "0x2EE1B50", VA = "0x182EE3550")]
	private static extern void SetFloatArrayImpl_Injected(IntPtr _unity_self, int name, ref ManagedSpanWrapper values, int count);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600069A")]
	[Address(RVA = "0x2EE4FB0", Offset = "0x2EE35B0", VA = "0x182EE4FB0")]
	private static extern void SetVectorArrayImpl_Injected(IntPtr _unity_self, int name, ref ManagedSpanWrapper values, int count);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600069B")]
	[Address(RVA = "0x2EE3D50", Offset = "0x2EE2350", VA = "0x182EE3D50")]
	private static extern void SetMatrixArrayImpl_Injected(IntPtr _unity_self, int name, ref ManagedSpanWrapper values, int count);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600069C")]
	[Address(RVA = "0x2EE2610", Offset = "0x2EE0C10", VA = "0x182EE2610")]
	private static extern void GetTextureScaleAndOffsetImpl_Injected(IntPtr _unity_self, int name, out Vector4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600069D")]
	[Address(RVA = "0x2EE49B0", Offset = "0x2EE2FB0", VA = "0x182EE49B0")]
	private static extern void SetTextureOffsetImpl_Injected(IntPtr _unity_self, int name, [In] ref Vector2 offset);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600069E")]
	[Address(RVA = "0x2EE4C30", Offset = "0x2EE3230", VA = "0x182EE4C30")]
	private static extern void SetTextureScaleImpl_Injected(IntPtr _unity_self, int name, [In] ref Vector2 scale);
}
